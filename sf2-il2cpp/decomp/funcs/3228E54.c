// LPGPNBGHDBD$$BLPHGLNELMC @ RVA 0x3228E54

MGNDHCBAPEN_int__int__o * LPGPNBGHDBD__BLPHGLNELMC(System_String_o *GJFGFNAGPEO,MethodInfo *method)

{
  int iVar1;
  JMDPBFOCHHP_o *__this;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar2;
  MGNDHCBAPEN_int__int__o *__this_00;
  int32_t NANHIJPKIAP;
  MethodInfo *extraout_x1;
  int32_t JGGJNLLANAE;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_04566f94 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_int>_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566f94 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this != (JMDPBFOCHHP_o *)0x0) {
    pJVar2 = JMDPBFOCHHP__FPPDGOEOJCH(__this,GJFGFNAGPEO,(MethodInfo *)0x0);
    __this_00 = (MGNDHCBAPEN_int__int__o *)0x0;
    if (pJVar2 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) {
      iVar1 = (pJVar2->fields).JPEIKHCEJBM;
      if (iVar1 < 1) {
        fVar3 = (pJVar2->fields).IJDAKGKCHLG;
        JGGJNLLANAE = -0x80000000;
        if (fVar3 != INFINITY) {
          JGGJNLLANAE = (int)fVar3;
        }
        __this_00 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
        NANHIJPKIAP = JGGJNLLANAE;
      }
      else {
        fVar4 = (pJVar2->fields).IJDAKGKCHLG;
        fVar5 = (float)iVar1 / 100.0;
        fVar3 = fVar4;
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          fVar3 = (pJVar2->fields).IJDAKGKCHLG;
        }
        fVar3 = (fVar5 + 1.0) * fVar3;
        fVar4 = (1.0 - fVar5) * fVar4;
        JGGJNLLANAE = -0x80000000;
        if ((float)(int)fVar3 != INFINITY) {
          JGGJNLLANAE = (int)fVar3;
        }
        __this_00 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
        NANHIJPKIAP = -0x80000000;
        if ((float)(int)fVar4 != INFINITY) {
          NANHIJPKIAP = (int)fVar4;
        }
      }
      MGNDHCBAPEN<int,_int>___ctor
                (__this_00,NANHIJPKIAP,JGGJNLLANAE,Method_MGNDHCBAPEN<int,_int>__ctor__);
    }
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

