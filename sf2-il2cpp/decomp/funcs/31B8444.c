// Nekki.SF2.GUI.Map.MapButtonViewBase$$GNMFDGIDOKJ @ RVA 0x31B8444

void Nekki_SF2_GUI_Map_MapButtonViewBase__GNMFDGIDOKJ
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_RaidKey__o *pSVar2;
  
  if ((DAT_04566bc9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidKey>_Clear__);
    DAT_04566bc9 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MapButtonViewBase__BBLKJEBBBJH(__this,method);
  __this_00 = (__this->fields)._hintRootCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).KFCOGLMHJGN;
    if (pSVar2 != (System_Collections_Generic_List_RaidKey__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).GPBMNMEDLKB;
      if (pSVar2 != (System_Collections_Generic_List_RaidKey__o *)0x0) {
        iVar1 = (pSVar2->fields)._size;
        (pSVar2->fields)._size = 0;
        (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        Nekki_SF2_GUI_Map_IRaidKeysView__GNMFDGIDOKJ((__this->fields)._keyPanel1,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Map_IRaidKeysView__GNMFDGIDOKJ((__this->fields)._keyPanel2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

