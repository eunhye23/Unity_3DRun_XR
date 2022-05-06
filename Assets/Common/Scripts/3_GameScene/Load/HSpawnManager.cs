using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HSpawnManager : MonoBehaviour
{
    HRoadSpawn roadSpawn;
    JPlotSpanwer plotSpawner;
    JObstaclesSpanwer obstaclesSpawner;
    public Item_Collection itemColletction;
    ObjectManager objectManager;
    

    void Start()
    {
        roadSpawn = GetComponent<HRoadSpawn>();
        plotSpawner = GetComponent<JPlotSpanwer>();
        obstaclesSpawner = GetComponent<JObstaclesSpanwer>();
        objectManager = GetComponent<ObjectManager>();
        
    }

   
    void Update()
    {
        
    }

   


    public void SpawnTriggerEnter()
    {
        roadSpawn.MoveRoad();
        plotSpawner.SpawnPlot();
        obstaclesSpawner.SpawnObstacle();
        itemColletction.ItemSpawn();
    }

}
