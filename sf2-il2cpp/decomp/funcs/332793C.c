// Nekki.SF2.GUI.Map.RaidKeysRowView$$GetApproxWidth @ RVA 0x332793C

float Nekki_SF2_GUI_Map_RaidKeysRowView__GetApproxWidth
                (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,
                System_Collections_Generic_List_NPKKNCCEIND__o *IFFLAAMFALK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar3;
  float fVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045678a3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_get_Count__);
    DAT_045678a3 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (IFFLAAMFALK != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0) {
    iVar1 = (IFFLAAMFALK->fields)._size;
    if (iVar1 < 1) {
      fVar5 = 0.0;
    }
    else {
      pUVar3 = (__this->fields).HJEECKHPNHC;
      if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_03427a48;
      fVar5 = *(float *)&(pUVar3->fields).m_ChildScaleWidth * (float)(iVar1 + -1);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)IFFLAAMFALK,
                 Method_System_Collections_Generic_List<NPKKNCCEIND>_GetEnumerator__);
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_MoveNext__
                               ), bVar2) {
        fVar4 = Nekki_SF2_GUI_Map_RaidKey__GetApproxWidth
                          ((NPKKNCCEIND_o *)local_48.fields._current,(MethodInfo *)0x0);
        fVar5 = fVar5 + fVar4;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<NPKKNCCEIND>_Dispose__)
      ;
    }
    return fVar5;
  }
LAB_03427a48:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

