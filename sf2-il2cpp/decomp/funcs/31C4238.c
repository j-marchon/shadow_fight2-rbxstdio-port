// Nekki.SF2.GUI.Fight.ActivePerkModel$$Render @ RVA 0x31C4238

void Nekki_SF2_GUI_Fight_ActivePerkModel__Render
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ActivePerkItemContainer__o *pSVar1;
  Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this_00;
  System_Collections_Generic_List_ActivePerkItem__o *pSVar2;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  int iVar4;
  
  if ((DAT_04566c26 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_get_Item__);
    DAT_04566c26 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).MHHBMNPJOOF;
  if (pSVar1 != (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0) {
    iVar4 = 0;
    do {
      if ((pSVar1->fields)._size <= iVar4) {
        pSVar2 = (__this->fields).DOKOOFIPJGJ;
        if (pSVar2 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
          iVar4 = 0;
          goto LAB_032c4338;
        }
        break;
      }
      __this_00 = (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                             Method_System_Collections_Generic_List<ActivePerkItemContainer>_get_Item__
                            );
      if (__this_00 == (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *)0x0) break;
      Nekki_SF2_GUI_Fight_ActivePerkItemContainer__Render(__this_00,(MethodInfo *)0x0);
      method = extraout_x1_00;
      if ((__this_00->fields)._PBMMCACCKNJ_k__BackingField != false) {
        pSVar1 = (__this->fields).MHHBMNPJOOF;
        if (pSVar1 == (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                   Method_System_Collections_Generic_List<ActivePerkItemContainer>_RemoveAt__);
        iVar4 = iVar4 + -1;
        method = extraout_x1_01;
      }
      pSVar1 = (__this->fields).MHHBMNPJOOF;
      iVar4 = iVar4 + 1;
    } while (pSVar1 != (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0);
  }
  goto LAB_032c4380;
  while( true ) {
    pSVar2 = (__this->fields).DOKOOFIPJGJ;
    iVar4 = iVar4 + 1;
    if (pSVar2 == (System_Collections_Generic_List_ActivePerkItem__o *)0x0) break;
LAB_032c4338:
    if ((pSVar2->fields)._size <= iVar4) {
      Nekki_SF2_GUI_Fight_ActivePerkModel__HKDMNNDDAEP(__this,method);
      return;
    }
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                        Method_System_Collections_Generic_List<ActivePerkItem>_get_Item__);
    if (pIVar3 == (Il2CppObject *)0x0) break;
    method = extraout_x1_02;
    if (*(char *)&pIVar3[4].monitor != '\0') {
      pSVar2 = (__this->fields).DOKOOFIPJGJ;
      if (pSVar2 == (System_Collections_Generic_List_ActivePerkItem__o *)0x0) break;
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar2,iVar4,
                 Method_System_Collections_Generic_List<ActivePerkItem>_RemoveAt__);
      iVar4 = iVar4 + -1;
      method = extraout_x1_03;
    }
  }
LAB_032c4380:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

