// Nekki.SF2.GUI.Map.MapScene.MIKDLNICFCF.<<SwitchToMapSceneAndOpenRaidMap>g__GoToRaidMap|0>d$$MoveNext @ RVA 0x3589960

bool Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_<<SwitchToMapSceneAndOpenRaidMap>g__GoToRaidMap_0>d__MoveNext
               (Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF___SwitchToMapSceneAndOpenRaidMap_g__GoToRaidMap_0_d_o
                *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  GCIFMNHADDF_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  long lVar3;
  FKDLCJJOGIP_o *__this_02;
  System_Action_o *pSVar4;
  Il2CppObject **ppIVar5;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_o *pNVar6;
  
  if ((DAT_04568d2d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04568d2d = 1;
  }
  iVar1 = (__this->fields).__1__state;
  pNVar6 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (GCIFMNHADDF_o *)0x0) goto LAB_03689b00;
    GCIFMNHADDF__DEAPPIKAHEP(__this_00,(MethodInfo *)0x0);
    __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 == (NDPMLPGANCI_o *)0x0) goto LAB_03689b00;
    NDPMLPGANCI__EKPAFDJIAGI
              (__this_01,5,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,(MethodInfo *)0x0
              );
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    ppIVar5 = &(__this->fields).__2__current;
    *ppIVar5 = (Il2CppObject *)0x0;
    thunk_FUN_01c20e04(ppIVar5,0);
    (__this->fields).__1__state = 1;
    return true;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
      (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
    Nekki_SF2_GUI_Map_MapScene__SetRaidMode
              ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8),(MethodInfo *)0x0);
    __this_02 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((__this_02 != (FKDLCJJOGIP_o *)0x0) &&
       (FKDLCJJOGIP__LGBOGFICFPF(__this_02,(MethodInfo *)0x0),
       pNVar6 != (Nekki_SF2_GUI_Map_MapScene_MIKDLNICFCF_o *)0x0)) {
      pSVar4 = (pNVar6->fields).onComplete;
      if (pSVar4 != (System_Action_o *)0x0) {
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method);
      }
      return false;
    }
  }
LAB_03689b00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

