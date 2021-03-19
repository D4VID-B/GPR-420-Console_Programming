// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpActor.h"

// Sets default values
AHttpActor::AHttpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Http = &FHttpModule::Get();
	currentTemp = 0;
	currentWindDirection = 0;
	
}

// Called when the game starts or when spawned
void AHttpActor::BeginPlay()
{
	Super::BeginPlay();
	MyHttpCall();
	/*FTimerHandle API_TimerHandle;
	GetWorldTimerManager().SetTimer(API_TimerHandle, this, &AHttpActor::MyHttpCall, delay);*/
}

// Called every frame
void AHttpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 

}
void AHttpActor::MyHttpCall()
{
	TSharedRef<IHttpRequest,ESPMode::ThreadSafe> Request = Http->CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &AHttpActor::OnResponseReceived);
	//This is the url on which to process the request
	Request->SetURL("https://api.weather.gov/gridpoints/BTV/88,56/forecast");
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->ProcessRequest();
}

void AHttpActor::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		TSharedPtr<FJsonValue, ESPMode::NotThreadSafe> obj = JsonObject->TryGetField("properties");
		//Get the value of the json object by field name
		TArray<TSharedPtr<FJsonValue>> objArray = obj->AsObject()->GetArrayField("periods");
		for (int32 i = 0; i < objArray.Num(); i++)
		{
			TemperatureArray.Add(objArray[i]->AsObject()->GetIntegerField(TEXT("temperature")));
			FString temperatureString = objArray[i]->AsObject()->GetStringField(TEXT("temperature"));
			GEngine->AddOnScreenDebugMessage(1 + i, 2.0f, FColor::Green, temperatureString);
			windDirection = objArray[i]->AsObject()->GetStringField(TEXT("windSpeed"));
			GEngine->AddOnScreenDebugMessage(14 + i, 2.0f, FColor::Red, windDirection);
		}

		
		
		/*if (JsonObject->TryGetField("properties"))
		{
			GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, "Periods found");
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, "Periods not found");
		}*/
		
			/*TArray<TSharedPtr<FJsonValue>> objArray2 = JsonObject->GetArrayField("periods");
			for (int32 j = 0; j < objArray.Num(); j++)
			{
				FString temperature = objArray2[j]->AsObject()->GetStringField(TEXT("temperature"));
				GEngine->AddOnScreenDebugMessage(1 + j, 2.0f, FColor::Green, temperature);
			}*/
			
		//{

		//}
		/**/
		//int32 recievedInt = JsonObject->GetIntegerField(objArray[0]->AsString());

		//Output it to the engine
		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, objArray[0]->AsString());
	}
}

void AHttpActor::GetCurrentTemp()
{
	for (int32 i = 0; i < TemperatureArray.Num(); i++)
	{
		FString holder;
		holder.AppendInt(TemperatureArray[i]);
		GEngine->AddOnScreenDebugMessage(28 + i, 2, FColor::Blue, holder);
	}

}

int AHttpActor::GetCurrentWindDirection()
{
	int windStorage = currentWindDirection;
	currentWindDirection++;

	return windStorage;
}

