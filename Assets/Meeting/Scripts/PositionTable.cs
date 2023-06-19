using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PositionTable : MonoBehaviour
{
    public GameObject Table;
    public void PositionTableFunc()
    {
        Vector3 Map = transform.position;
        Table.transform.position = new Vector3(Map.x, Map.y - 1.115955f, Map.z);
    }
}
