// OLKKAIFGGAK$$NKOJIKAPDOC @ RVA 0x34EDFA0

void OLKKAIFGGAK__NKOJIKAPDOC
               (OLKKAIFGGAK_o *__this,NJPIKDFEOCN_o *IKKAMAMLIKA,PJKHAJKEHEL_o *NDOMOKBINFD,
               MethodInfo *method)

{
  bool bVar1;
  DOPEEDABNEK_o *__this_00;
  HOOAAGABMBL_o *pHVar2;
  System_String_o *message;
  PJKHAJKEHEL_o *pPVar3;
  long *plVar4;
  NLPJLHOEAOE_o *__this_01;
  
  if ((DAT_045687b3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_9158);
    DAT_045687b3 = 1;
  }
  if (IKKAMAMLIKA == (NJPIKDFEOCN_o *)0x0) {
    return;
  }
  if (NDOMOKBINFD == (PJKHAJKEHEL_o *)0x0) {
    return;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                    ((IKKAMAMLIKA->fields).super._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
  if (bVar1) goto LAB_035ee0cc;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 == (DOPEEDABNEK_o *)0x0) goto LAB_035ee184;
  pHVar2 = DOPEEDABNEK__CKKIPBAIEMN
                     (__this_00,(IKKAMAMLIKA->fields).super._COIPKAKHDFP_k__BackingField,
                      (MethodInfo *)0x0);
  if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 035ee08c to 036ee203 has its CatchHandler @ 035ee08c
                       catch() { ... } // from try @ 035ee08c with catch @ 035ee08c
                       catch() { ... } // from try @ 035ee22c with catch @ 035ee08c
                       catch() { ... } // from try @ 035ee2a4 with catch @ 035ee08c
                       catch() { ... } // from try @ 035ee330 with catch @ 035ee08c
                       catch() { ... } // from try @ 035ee36c with catch @ 035ee08c
                       catch() { ... } // from try @ 035ee388 with catch @ 035ee08c
                       catch() { ... } // from try @ 035ee3b8 with catch @ 035ee08c */
    message = System_String__Concat
                        (StringLiteral_9158,(IKKAMAMLIKA->fields).super._COIPKAKHDFP_k__BackingField
                         ,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
LAB_035ee0cc:
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((IKKAMAMLIKA->fields).KGDGEHJHGJB,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pPVar3 = (__this->fields).FAPMJJBOFEF;
    if (pPVar3 == (PJKHAJKEHEL_o *)0x0) goto LAB_035ee184;
    plVar4 = (long *)(*(pPVar3->klass->vtable)._4_CJPIJKJDHGI.methodPtr)
                               (pPVar3,(IKKAMAMLIKA->fields).KGDGEHJHGJB,
                                (IKKAMAMLIKA->fields).ANELJFFCNAP,
                                (pPVar3->klass->vtable)._4_CJPIJKJDHGI.method);
    if (plVar4 == (long *)0x0) {
      return;
    }
    pHVar2 = (HOOAAGABMBL_o *)
             (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
      return;
    }
  }
  else {
    pHVar2 = (HOOAAGABMBL_o *)
             (*(pHVar2->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                       (pHVar2,(pHVar2->klass->vtable)._7_FAOBHLCDKJI.method);
    if (pHVar2 == (HOOAAGABMBL_o *)0x0) goto LAB_035ee0cc;
  }
  HOOAAGABMBL__BBEPHPFNCKG(pHVar2,(HOOAAGABMBL_o *)IKKAMAMLIKA,(MethodInfo *)0x0);
  (*(NDOMOKBINFD->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
            (NDOMOKBINFD,(pHVar2->fields)._GMPAEDFIIHF_k__BackingField,pHVar2,
             (NDOMOKBINFD->klass->vtable)._9_CGNPHPDFKJG.method);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
    NLPJLHOEAOE__HBFMPJEOIEL(__this_01,pHVar2,(MethodInfo *)0x0);
    return;
  }
LAB_035ee184:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

