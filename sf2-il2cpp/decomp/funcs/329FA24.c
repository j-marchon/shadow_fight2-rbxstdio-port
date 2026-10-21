// IGJEEGBBNFC$$FOEBKFMONMM @ RVA 0x329FA24

void IGJEEGBBNFC__FOEBKFMONMM
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool PAOOALGAMIO,
               MethodInfo *method)

{
  undefined8 *puVar1;
  System_Text_StringBuilder_o *__this_00;
  Il2CppObject *pIVar2;
  System_String_o *format;
  System_Object_array *args;
  undefined8 uVar3;
  long lVar4;
  HJNEOLCKEMD_o *pHVar5;
  NJPBBPOABKP_o *pNVar6;
  HEFOANCOHDC_o *pHVar7;
  System_String_o *pSVar8;
  
  if ((DAT_045673d6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_10023);
    FUN_01bab630(&StringLiteral_10230);
    FUN_01bab630(&StringLiteral_9144);
    FUN_01bab630(&StringLiteral_9151);
    DAT_045673d6 = 1;
  }
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append(__this_00,StringLiteral_10023,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_9151;
    if (!PAOOALGAMIO) {
      puVar1 = &StringLiteral_9144;
    }
    System_Text_StringBuilder__Append(__this_00,(System_String_o *)*puVar1,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,StringLiteral_10230,(MethodInfo *)0x0);
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__)
    ;
    if (((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[9].klass != (Il2CppClass *)0x0)) &&
       (lVar4 = *(long *)&((pIVar2[9].klass)->_1).this_arg.bits, lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        return;
      }
      format = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
                    /* try { // try from 0339fbb0 to 0349fefb has its CatchHandler @ 0339fbb0
                       catch() { ... } // from try @ 0339fbb0 with catch @ 0339fbb0
                       catch() { ... } // from try @ 0339ffb8 with catch @ 0339fbb0
                       catch() { ... } // from try @ 0339fff4 with catch @ 0339fbb0
                       catch() { ... } // from try @ 033a0030 with catch @ 0339fbb0
                       catch() { ... } // from try @ 033a0060 with catch @ 0339fbb0 */
      if (((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
          (pHVar5 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar5 != (HJNEOLCKEMD_o *)0x0)) &&
         ((pNVar6 = (pHVar5->fields)._MLBBLNHFENE_k__BackingField, pNVar6 != (NJPBBPOABKP_o *)0x0 &&
          ((pHVar7 = (pNVar6->fields)._MEFGNAIILBJ_k__BackingField, pHVar7 != (HEFOANCOHDC_o *)0x0
           && (args != (System_Object_array *)0x0)))))) {
        pSVar8 = (pHVar7->fields).JIJLBFGKNJK;
        if ((pSVar8 != (System_String_o *)0x0) &&
           (lVar4 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        {
LAB_0339fcdc:
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar8;
          thunk_FUN_01c20e04(args->m_Items,pSVar8);
          pHVar5 = (CPECAEHDDDB->fields).EDOEMIDBEGO;
          if (pHVar5 == (HJNEOLCKEMD_o *)0x0) goto LAB_0339fcd4;
          pSVar8 = (pHVar5->fields)._COIPKAKHDFP_k__BackingField;
          if ((pSVar8 != (System_String_o *)0x0) &&
             (lVar4 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar4 == 0
             )) goto LAB_0339fcdc;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = (Il2CppObject *)pSVar8;
            thunk_FUN_01c20e04(args->m_Items + 1,pSVar8);
            pHVar5 = (CPECAEHDDDB->fields).EDOEMIDBEGO;
            if (pHVar5 == (HJNEOLCKEMD_o *)0x0) goto LAB_0339fcd4;
            pSVar8 = (pHVar5->fields)._APNFLKNBGKE_k__BackingField;
            if ((pSVar8 != (System_String_o *)0x0) &&
               (lVar4 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class),
               lVar4 == 0)) goto LAB_0339fcdc;
            if (2 < (uint)args->max_length) {
              args->m_Items[2] = (Il2CppObject *)pSVar8;
              thunk_FUN_01c20e04(args->m_Items + 2,pSVar8);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogFormat(format,args,(MethodInfo *)0x0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_0339fcd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

