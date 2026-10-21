// EGMONPGHHDP$$FELFKGBGPLM @ RVA 0x3049990

void EGMONPGHHDP__FELFKGBGPLM
               (EGMONPGHHDP_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,System_Action_o *BLMFLPJJMPF,
               System_String_o *GINPHGBMEGC,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  EEGDOGKBLNG_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  long lVar3;
  CPNHNIKFGFB_o *__this_02;
  int32_t CEOLOKFCKIG;
  Il2CppClass *LLJHKLPGMGC;
  
  if ((DAT_04565dfd & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EMBNHHOCCBH>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04565dfd = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    __this_02 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    CEOLOKFCKIG = 1;
  }
  else {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EMBNHHOCCBH>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        LLJHKLPGMGC = pIVar2[2].klass;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
          EEGDOGKBLNG__JOMFHMDCMNG(__this_00,(KAMBBJFPLGM_o *)LLJHKLPGMGC,(MethodInfo *)0x0);
          __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
            KKLJIDJBFEI__NPFEHJDKDHD
                      (__this_01,GINPHGBMEGC,pIVar2[1].monitor,false,(MethodInfo *)0x0);
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
              Nekki_SF2_GUI_Profile_ProfileScene__UpdateBottomIndicators
                        ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                         (MethodInfo *)0x0);
            }
            if (BLMFLPJJMPF == (System_Action_o *)0x0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x03149ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
                      ((BLMFLPJJMPF->fields).super.super.method_code,
                       (BLMFLPJJMPF->fields).super.super.method);
            return;
          }
        }
      }
      goto LAB_03149afc;
    }
    __this_02 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    CEOLOKFCKIG = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
  }
  if (__this_02 != (CPNHNIKFGFB_o *)0x0) {
    CPNHNIKFGFB__DIGPCFKCCBK(__this_02,CEOLOKFCKIG,(MethodInfo *)0x0);
    return;
  }
LAB_03149afc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

