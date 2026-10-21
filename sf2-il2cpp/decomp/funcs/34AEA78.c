// KDPDBGNOFEN$$KLNMLOOCAAO @ RVA 0x34AEA78

int32_t KDPDBGNOFEN__KLNMLOOCAAO
                  (KDPDBGNOFEN_o *__this,System_String_o *CELOLGNMKCG,
                  Google_Protobuf_IMessage_o *HJEKJFLBKDB,System_Action_KEFHDOHHHML__o *BLMFLPJJMPF,
                  float HEDFGDPDHAL,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  undefined4 uVar2;
  Il2CppObject *__this_00;
  FLBBKMOHIOG_o *__this_01;
  Sfs2X_Entities_Data_SFSObject_o *parameters;
  ulong uVar3;
  System_Type_o *pSVar4;
  System_Type_o *right;
  System_String_array *values;
  System_String_o *pSVar5;
  ONPHBGJDFBM_o *__this_02;
  System_Action_o *JPBADEBNNLL;
  ACAEKBNCODE_o *__this_03;
  Sfs2X_Requests_ExtensionRequest_o *__this_04;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  Sfs2X_SmartFox_o *__this_05;
  void **ppvVar7;
  undefined4 local_64;
  
  if ((DAT_0456854a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Sfs2X_Requests_ExtensionRequest_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&Method_KDPDBGNOFEN_IDAJCGIEJCJ_APBOPKDOCJP__);
    FUN_01bab630(&KDPDBGNOFEN_IDAJCGIEJCJ_TypeInfo);
                    /* try { // try from 035aeb18 to 036aeb3f has its CatchHandler @ 035aee1c */
    FUN_01bab630(&ONPHBGJDFBM_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_355);
    FUN_01bab630(&StringLiteral_11564);
    FUN_01bab630(&StringLiteral_20761);
    FUN_01bab630(&StringLiteral_1155);
                    /* try { // try from 035aeb74 to 036aeb9f has its CatchHandler @ 035aee18 */
    FUN_01bab630(&StringLiteral_11566);
    FUN_01bab630(&StringLiteral_83);
    FUN_01bab630(&StringLiteral_18911);
    FUN_01bab630(&StringLiteral_11565);
    FUN_01bab630(&StringLiteral_4430);
    DAT_0456854a = 1;
  }
  local_64 = 0;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KDPDBGNOFEN_IDAJCGIEJCJ_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
                    /* try { // try from 035aebd4 to 036aebdf has its CatchHandler @ 035aede4 */
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    if ((__this->fields).EBJCMEOKKOK == (Sfs2X_SmartFox_o *)0x0) {
      pSVar5 = System_String__Concat(StringLiteral_11564,CELOLGNMKCG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      return -1;
    }
                    /* try { // try from 035aebe4 to 036aebeb has its CatchHandler @ 035aede8 */
    __this_01 = (__this->fields).KPDFPANJBJB;
    if (__this_01 == (FLBBKMOHIOG_o *)0x0) goto LAB_035af094;
                    /* try { // try from 035aebf0 to 036aebfb has its CatchHandler @ 035aee04 */
    parameters = FLBBKMOHIOG__IIKIKJJCNNM(__this_01,HJEKJFLBKDB,(MethodInfo *)0x0);
                    /* try { // try from 035aec00 to 036aec07 has its CatchHandler @ 035aede0 */
    uVar3 = (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                      (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
    if ((uVar3 & 1) == 0) {
      if (parameters == (Sfs2X_Entities_Data_SFSObject_o *)0x0) goto LAB_035af094;
    }
    else {
                    /* try { // try from 035aec10 to 036aec17 has its CatchHandler @ 035aee00 */
                    /* try { // try from 035aec1c to 036aec23 has its CatchHandler @ 035aedec */
      if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 035aec2c to 036aec47 has its CatchHandler @ 035aee14 */
      pSVar4 = ICOEHFKOMGO__HLFDFELPNHP(CELOLGNMKCG,(MethodInfo *)0x0);
      if (HJEKJFLBKDB == (Google_Protobuf_IMessage_o *)0x0) goto LAB_035af094;
      right = System_Object__GetType((Il2CppObject *)HJEKJFLBKDB,(MethodInfo *)0x0);
                    /* try { // try from 035aec48 to 036aec57 has its CatchHandler @ 035aeddc */
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035aec60 to 036aec67 has its CatchHandler @ 035aedd0 */
        thunk_FUN_01ba7564(System_Type_TypeInfo);
      }
      bVar1 = System_Type__op_Inequality(pSVar4,right,(MethodInfo *)0x0);
                    /* try { // try from 035aec78 to 036aec7b has its CatchHandler @ 035aedd4 */
      if (bVar1) {
                    /* try { // try from 035aec7c to 036aeda3 has its CatchHandler @ 035ae9c4 */
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
        if (values == (System_String_array *)0x0) goto LAB_035af094;
        if ((int)values->max_length != 0) {
          values->m_Items[0] = StringLiteral_11565;
          thunk_FUN_01c20e04(values->m_Items);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = CELOLGNMKCG;
            thunk_FUN_01c20e04(values->m_Items + 1,CELOLGNMKCG);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = StringLiteral_83;
              thunk_FUN_01c20e04();
              if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar4 = ICOEHFKOMGO__HLFDFELPNHP(CELOLGNMKCG,(MethodInfo *)0x0);
              if (pSVar4 == (System_Type_o *)0x0) {
                pSVar5 = (System_String_o *)0x0;
              }
              else {
                pSVar5 = (System_String_o *)
                         (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                                   (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
              }
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar5;
                thunk_FUN_01c20e04(values->m_Items + 3);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = StringLiteral_355;
                  thunk_FUN_01c20e04();
                  pSVar4 = System_Object__GetType((Il2CppObject *)HJEKJFLBKDB,(MethodInfo *)0x0);
                  if (pSVar4 == (System_Type_o *)0x0) {
                    pSVar5 = (System_String_o *)0x0;
                  }
                  else {
                    pSVar5 = (System_String_o *)
                             (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                                       (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
                  }
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar5;
                    thunk_FUN_01c20e04();
                    pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                    pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                             FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
                    if (pNVar6 == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0)
                    goto LAB_035af094;
                    if ((int)pNVar6->max_length != 0) {
                      pNVar6->m_Items[0] = 6;
                      Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
                      return -1;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_035af098;
      }
      if (parameters == (Sfs2X_Entities_Data_SFSObject_o *)0x0) goto LAB_035af094;
                    /* try { // try from 035aeda4 to 036aedab has its CatchHandler @ 035aee20 */
      local_64 = (*(parameters->klass->vtable)._34_GetInt.methodPtr)
                           (parameters,StringLiteral_18911,
                            (parameters->klass->vtable)._34_GetInt.method);
                    /* try { // try from 035aedac to 036aedaf has its CatchHandler @ 035aee08 */
                    /* try { // try from 035aedb0 to 036aedb3 has its CatchHandler @ 035aedfc */
                    /* try { // try from 035aedb4 to 036aedb7 has its CatchHandler @ 035aedf8 */
      pSVar5 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                    /* try { // try from 035aedb8 to 036aedbb has its CatchHandler @ 035aedf4 */
                    /* try { // try from 035aedbc to 036aedbf has its CatchHandler @ 035aedf0 */
                    /* try { // try from 035aedc0 to 036aedc3 has its CatchHandler @ 035aedd8 */
                    /* try { // try from 035aedc4 to 036aee2f has its CatchHandler @ 035ae9c4 */
                    /* catch() { ... } // from try @ 035aec60 with catch @ 035aedd0 */
      pSVar5 = System_String__Concat(StringLiteral_20761,pSVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035aec78 with catch @ 035aedd4 */
                    /* catch() { ... } // from try @ 035aedc0 with catch @ 035aedd8 */
                    /* catch() { ... } // from try @ 035aec48 with catch @ 035aeddc */
                    /* catch() { ... } // from try @ 035aec00 with catch @ 035aede0 */
      pSVar4 = System_Object__GetType((Il2CppObject *)HJEKJFLBKDB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035aebd4 with catch @ 035aede4 */
                    /* catch() { ... } // from try @ 035aebe4 with catch @ 035aede8 */
                    /* catch() { ... } // from try @ 035aec1c with catch @ 035aedec */
                    /* catch() { ... } // from try @ 035aedbc with catch @ 035aedf0 */
                    /* catch() { ... } // from try @ 035aedb8 with catch @ 035aedf4 */
                    /* catch() { ... } // from try @ 035aedb4 with catch @ 035aedf8 */
                    /* catch() { ... } // from try @ 035aedb0 with catch @ 035aedfc */
                    /* catch() { ... } // from try @ 035aec10 with catch @ 035aee00 */
                    /* catch() { ... } // from try @ 035aebf0 with catch @ 035aee04 */
                    /* catch() { ... } // from try @ 035aedac with catch @ 035aee08 */
      (*(__this->klass->vtable)._5_CHMEICFBNAK.methodPtr)
                (__this,StringLiteral_4430,CELOLGNMKCG,pSVar5,pSVar4,HJEKJFLBKDB,
                 (__this->klass->vtable)._5_CHMEICFBNAK.method);
    }
                    /* catch() { ... } // from try @ 035aec2c with catch @ 035aee14 */
                    /* catch() { ... } // from try @ 035aeb74 with catch @ 035aee18 */
                    /* catch() { ... } // from try @ 035aeb18 with catch @ 035aee1c */
                    /* catch() { ... } // from try @ 035aeda4 with catch @ 035aee20 */
    uVar2 = (*(parameters->klass->vtable)._34_GetInt.methodPtr)
                      (parameters,StringLiteral_18911,(parameters->klass->vtable)._34_GetInt.method)
    ;
    ppvVar7 = &__this_00[1].monitor;
                    /* try { // try from 035aee30 to 036aee33 has its CatchHandler @ 035aee44 */
    *(undefined4 *)ppvVar7 = uVar2;
                    /* catch() { ... } // from try @ 035aee30 with catch @ 035aee44 */
    __this_02 = (ONPHBGJDFBM_o *)thunk_FUN_01bda818(ONPHBGJDFBM_TypeInfo);
                    /* try { // try from 035aee54 to 036aeebb has its CatchHandler @ 035aeed0 */
    ONPHBGJDFBM___ctor(__this_02,CELOLGNMKCG,BLMFLPJJMPF,IMMNELPBGIF,(MethodInfo *)0x0);
    if (0.0 < HEDFGDPDHAL) {
      JPBADEBNNLL = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (__this_02 == (ONPHBGJDFBM_o *)0x0) goto LAB_035af094;
      ONPHBGJDFBM__OCECLIFLFHK(__this_02,JPBADEBNNLL,HEDFGDPDHAL / 1000.0,(MethodInfo *)0x0);
    }
    __this_03 = (__this->fields).PGDGCNKLKMN;
    if (__this_03 != (ACAEKBNCODE_o *)0x0) {
                    /* try { // try from 035aeebc to 036aeec7 has its CatchHandler @ 035ae9c4 */
                    /* try { // try from 035aeec8 to 036aeecf has its CatchHandler @ 035aeed0 */
      ACAEKBNCODE__ELDMBCFMOKO(__this_03,*(int32_t *)ppvVar7,__this_02,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035aee54 with catch @ 035aeed0
                       catch() { ... } // from try @ 035aeec8 with catch @ 035aeed0 */
      uVar3 = (*(__this->klass->vtable)._7_AAOJINBEIFF.methodPtr)
                        (__this,(__this->klass->vtable)._7_AAOJINBEIFF.method);
      if ((uVar3 & 1) != 0) {
        pSVar5 = System_Int32__ToString((int32_t)ppvVar7,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat
                           (StringLiteral_11566,pSVar5,StringLiteral_1155,CELOLGNMKCG,
                            (MethodInfo *)0x0);
        pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                 FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
        if (pNVar6 == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_035af094;
        if ((int)pNVar6->max_length == 0) {
LAB_035af098:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pNVar6->m_Items[0] = 6;
        Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
      }
      __this_05 = (__this->fields).EBJCMEOKKOK;
      __this_04 = (Sfs2X_Requests_ExtensionRequest_o *)
                  thunk_FUN_01bda818(Sfs2X_Requests_ExtensionRequest_TypeInfo);
      Sfs2X_Requests_ExtensionRequest___ctor
                (__this_04,CELOLGNMKCG,(Sfs2X_Entities_Data_ISFSObject_o *)parameters,
                 (MethodInfo *)0x0);
      if (__this_05 != (Sfs2X_SmartFox_o *)0x0) {
        Sfs2X_SmartFox__Send(__this_05,(Sfs2X_Requests_IRequest_o *)__this_04,(MethodInfo *)0x0);
        return *(int32_t *)ppvVar7;
      }
    }
  }
LAB_035af094:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

