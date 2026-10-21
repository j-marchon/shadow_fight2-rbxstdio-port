// FCJBEKHDLAF$$PKHKLAJCKDM @ RVA 0x33F162C

void FCJBEKHDLAF__PKHKLAJCKDM
               (FCJBEKHDLAF_o *__this,System_String_o *IEGGLEPKGIA,int32_t GCPPJFELNFI,
               int32_t BDJJIBJAOGL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  MGNDHCBAPEN_T1__T2__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar4;
  OLKKAIFGGAK_o *__this_01;
  System_Collections_Generic_Queue_MGNDHCBAPEN_string__int___o *__this_02;
  CNLGMNIEGFG_o *__this_03;
  CNLGMNIEGFG_o *pCVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04567f11 & 1) == 0) {
    FUN_01bab630(&CNLGMNIEGFG_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_int>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<MGNDHCBAPEN<string,_int>>_Enqueue__);
    DAT_04567f11 = 1;
  }
  __this_03 = (CNLGMNIEGFG_o *)(__this->fields).FBFPLEFCDOK;
  pCVar5 = __this_03;
  if (__this_03 == (CNLGMNIEGFG_o *)0x0) {
LAB_034f16d8:
    __this_03 = (CNLGMNIEGFG_o *)0x0;
  }
  else {
    bVar1 = (CNLGMNIEGFG_TypeInfo->_2).naturalAligment;
    if (((((AFFHKININGD_c *)__this_03->klass)->_2).naturalAligment < bVar1) ||
       ((((AFFHKININGD_c *)__this_03->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)CNLGMNIEGFG_TypeInfo)) {
      pCVar5 = (CNLGMNIEGFG_o *)0x0;
      goto LAB_034f16d8;
    }
    pCVar4 = (__this_03->fields).BOOKHNOMHGM;
    if (pCVar4 == (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) goto LAB_034f1874;
    if ((pCVar4->fields).LPHHIMJHGEF != false) {
      return;
    }
  }
  if ((((((__this->fields).EKHKFLJLLHB != false) || ((__this->fields).KPNMLAECCEE != false)) ||
       ((__this->fields).ABCJKJKLFII != false)) ||
      ((__this_01 = (__this->fields).CLEKIBBCAOJ, __this_01 == (OLKKAIFGGAK_o *)0x0 ||
       ((__this->fields).JEDELFOBLEN == (PJKHAJKEHEL_o *)0x0)))) ||
     (fVar6 = OLKKAIFGGAK__ILKFDEIGFBO(__this_01,(MethodInfo *)0x0), fVar6 <= 0.0)) {
    return;
  }
  __this_02 = (__this->fields).IKLIFOHCODH;
  __this_00 = (MGNDHCBAPEN_T1__T2__o *)thunk_FUN_01bda818(MGNDHCBAPEN<string,_int>_TypeInfo);
  method_00 = Method_MGNDHCBAPEN<string,_int>__ctor__;
  MGNDHCBAPEN<object,_int>___ctor
            (__this_00,(Il2CppObject *)IEGGLEPKGIA,GCPPJFELNFI,
             (MethodInfo_27BB25C *)Method_MGNDHCBAPEN<string,_int>__ctor__);
  if (__this_02 != (System_Collections_Generic_Queue_MGNDHCBAPEN_string__int___o *)0x0) {
    System_Collections_Generic_Queue<object>__Enqueue
              ((System_Collections_Generic_Queue_T__o *)__this_02,(Il2CppObject *)__this_00,
               Method_System_Collections_Generic_Queue<MGNDHCBAPEN<string,_int>>_Enqueue__);
    fVar7 = OLKKAIFGGAK__ILKFDEIGFBO(__this_01,(MethodInfo *)0x0);
    fVar8 = (float)GCPPJFELNFI;
    fVar6 = fVar8;
    if (fVar7 <= fVar8) {
      fVar6 = OLKKAIFGGAK__ILKFDEIGFBO(__this_01,(MethodInfo *)0x0);
    }
    if (pCVar5 != (CNLGMNIEGFG_o *)0x0) {
      fVar7 = CNLGMNIEGFG__NBPOPEJDCKO(__this_03,(MethodInfo *)0x0);
      CNLGMNIEGFG__HFNDKACEADO(__this_03,fVar7 - fVar6,(MethodInfo *)0x0);
      fVar6 = OLKKAIFGGAK__ILKFDEIGFBO(__this_01,(MethodInfo *)0x0);
      OLKKAIFGGAK__MCEMJDBACFG(__this_01,fVar6 - fVar8,(MethodInfo *)0x0);
      fVar6 = OLKKAIFGGAK__ILKFDEIGFBO(__this_01,(MethodInfo *)0x0);
      pMVar3 = extraout_x1;
      if ((BDJJIBJAOGL < 1) || (fVar6 <= 0.0)) {
        if ((__this->fields).PEELENPNLHJ == 1) {
          (__this->fields).FOFNFONDEBM = true;
        }
        else {
          bVar2 = FCJBEKHDLAF__GLOJOHKGALF(__this,false,false,method_00);
          (__this->fields).FDMHAMJOCML = (bool_conflict)(~bVar2 & 1);
          pMVar3 = extraout_x1_00;
        }
      }
      if ((__this->fields).LEOILJJPHJC == false) {
        return;
      }
      FCJBEKHDLAF__DDAELILPAGL(__this,pMVar3);
      return;
    }
  }
LAB_034f1874:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

