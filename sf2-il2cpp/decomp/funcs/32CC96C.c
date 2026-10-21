// NOIIFNBIAHC$$MAHFCKJGBPP @ RVA 0x32CC96C

void NOIIFNBIAHC__MAHFCKJGBPP(NOIIFNBIAHC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CHDGOFBHAFI_o *pCVar3;
  System_Action_o *pSVar4;
  KKLJIDJBFEI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Map_MapScene_o *__this_01;
  
  if ((DAT_0456751e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_NOIIFNBIAHC_KMNFICHPGKD__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_0456751e = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,method);
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_01 = extraout_x1;
  if (bVar1) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar3 != (CHDGOFBHAFI_o *)0x0) {
      method_01 = extraout_x1_00;
      if ((pCVar3->fields).BLELLCNDBHN == false) goto LAB_033ccb34;
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      __this_01 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8);
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (__this_01 != (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
        Nekki_SF2_GUI_Map_MapScene__add_OnStoryMapOpenedAction(__this_01,pSVar4,(MethodInfo *)0x0);
        __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
          KKLJIDJBFEI__HKAALOKPBPG(__this_00,pSVar4,(MethodInfo *)0x0);
          NOIIFNBIAHC__EBBLKEADCJC(__this,method_00);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_033ccb34:
  NOIIFNBIAHC__NKGIJKODGAN(__this,method_01);
  return;
}

