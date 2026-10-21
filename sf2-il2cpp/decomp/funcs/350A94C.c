// FKDLCJJOGIP$$.ctor @ RVA 0x350A94C

void FKDLCJJOGIP___ctor(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  JMDPBFOCHHP_o *pJVar2;
  KKLJIDJBFEI_o *pKVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Action_o *pSVar4;
  
  if ((DAT_045688c1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FKDLCJJOGIP_BADKKABIPKK__);
    FUN_01bab630(&Method_FKDLCJJOGIP_EHCGDODIIGF__);
    FUN_01bab630(&Method_FKDLCJJOGIP_HJCDCLJFPMJ__);
    FUN_01bab630(&Method_FKDLCJJOGIP_JDLNMHBDBJK__);
    FUN_01bab630(&Method_FKDLCJJOGIP_KBODALOCELJ__);
    FUN_01bab630(&Method_FKDLCJJOGIP_PFHELBLKCDK__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_FKDLCJJOGIP_<>c_CNMLPFGBFED__);
    FUN_01bab630(&Method_FKDLCJJOGIP_<>c_EAHKMGLBGHL__);
    FUN_01bab630(&FKDLCJJOGIP_<>c_TypeInfo);
    DAT_045688c1 = 1;
    method = extraout_x1;
  }
  if ((FKDLCJJOGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FKDLCJJOGIP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar4 = FKDLCJJOGIP_<>c_TypeInfo->static_fields->__9__24_0;
  if (pSVar4 == (System_Action_o *)0x0) {
    if ((FKDLCJJOGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FKDLCJJOGIP_<>c_TypeInfo,method);
    }
    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &FKDLCJJOGIP_<>c_TypeInfo->static_fields->__9__24_0;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  if (__this != (FKDLCJJOGIP_o *)0x0) {
    (__this->fields).JFCAFEOAKBH = pSVar4;
    thunk_FUN_01c20e04(&__this->fields,pSVar4);
    if ((FKDLCJJOGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = FKDLCJJOGIP_<>c_TypeInfo->static_fields->__9__24_1;
    if (pSVar4 == (System_Action_o *)0x0) {
      if ((FKDLCJJOGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &FKDLCJJOGIP_<>c_TypeInfo->static_fields->__9__24_1;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).NLKPBBPPKCJ;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pJVar2 != (JMDPBFOCHHP_o *)0x0) {
      JMDPBFOCHHP__HFGKCGLMKNG(pJVar2,pSVar4,(MethodInfo *)0x0);
      pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pJVar2 != (JMDPBFOCHHP_o *)0x0) {
        JMDPBFOCHHP__DACLMDDNEBN(pJVar2,pSVar4,(MethodInfo *)0x0);
        pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
          KKLJIDJBFEI__KGJHOLAEPAI(pKVar3,pSVar4,(MethodInfo *)0x0);
          pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0360ac34 to 0370ae17 has its CatchHandler @ 0360ac34
                       catch() { ... } // from try @ 0360ac34 with catch @ 0360ac34
                       catch() { ... } // from try @ 0360aea0 with catch @ 0360ac34
                       catch() { ... } // from try @ 0360af68 with catch @ 0360ac34
                       catch() { ... } // from try @ 0360af90 with catch @ 0360ac34
                       catch() { ... } // from try @ 0360afc4 with catch @ 0360ac34 */
          System_Action___ctor();
          if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
            KKLJIDJBFEI__PJOBAFCNJAM(pKVar3,pSVar4,(MethodInfo *)0x0);
            pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
              KKLJIDJBFEI__HKAALOKPBPG(pKVar3,pSVar4,(MethodInfo *)0x0);
              pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              method_00 = Method_FKDLCJJOGIP_BADKKABIPKK__;
              System_Action___ctor();
              FKDLCJJOGIP__ALADOEDCONI(__this,pSVar4,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

