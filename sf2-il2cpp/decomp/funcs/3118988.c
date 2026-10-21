// MLLHFIDIHPA$$FLDPNAOFBDP @ RVA 0x3118988

void MLLHFIDIHPA__FLDPNAOFBDP(MLLHFIDIHPA_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  NDPMLPGANCI_o *pNVar4;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  MJHMHBEJFBH_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  undefined1 auVar5 [16];
  
  if ((DAT_045665cf & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&MJHMHBEJFBH_TypeInfo);
    FUN_01bab630(&Method_MLLHFIDIHPA_LGEMJFBPAGO__);
    FUN_01bab630(&Method_MLLHFIDIHPA_LHPLKNMLHBN__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_045665cf = 1;
    method = extraout_x1;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar5._8_8_ = method;
  auVar5._0_8_ = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620(lVar3,method);
  }
  lVar3 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3,auVar5._8_8_);
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).CFHOAJAHGBK != 5)) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
        (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
      Nekki_SF2_GUI_Profile_ProfileScene__ScrollToItemByName
                ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                 (__this->fields).CFHOAJAHGBK,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
LAB_03218bc4:
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar4,(MethodInfo *)0x0);
      pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                    thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
      if (iVar2 == 7) {
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          iVar2 = (__this->fields).CFHOAJAHGBK;
          __this_00 = (MJHMHBEJFBH_o *)thunk_FUN_01bda818(MJHMHBEJFBH_TypeInfo);
          MJHMHBEJFBH___ctor(__this_00,iVar2,(MethodInfo *)0x0);
          if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
            bVar1 = NDPMLPGANCI__EKPAFDJIAGI
                              (pNVar4,7,(Il2CppObject *)__this_00,(System_Action_object__o *)0x0,
                               (__this->fields).IFJHFNKOFDE,(MethodInfo *)0x0);
            if (bVar1) {
              return;
            }
            goto LAB_03218bc4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

