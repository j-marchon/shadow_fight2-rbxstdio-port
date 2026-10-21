// AJMOIOIBPGP$$BCLJHFNMAID @ RVA 0x3275394

void AJMOIOIBPGP__BCLJHFNMAID(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Il2CppObject *arg2;
  ACHLOMELAJE_o *__this_00;
  int32_t iVar3;
  AJDHCLBLGMI_o *pAVar4;
  undefined1 local_24 [4];
  
  if ((DAT_0456723c & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&StringLiteral_5741);
    FUN_01bab630(&StringLiteral_22405);
    DAT_0456723c = 1;
  }
  if ((NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) &&
     (pAVar4 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField, pAVar4 != (AJDHCLBLGMI_o *)0x0))
  {
    if ((pAVar4->fields).ICBBFDJOHHF == 3) {
                    /* try { // try from 033754b4 to 03475623 has its CatchHandler @ 033754b4
                       catch() { ... } // from try @ 033754b4 with catch @ 033754b4
                       catch() { ... } // from try @ 03375758 with catch @ 033754b4
                       catch() { ... } // from try @ 03375798 with catch @ 033754b4
                       catch() { ... } // from try @ 03375804 with catch @ 033754b4
                       catch() { ... } // from try @ 0337583c with catch @ 033754b4
                       catch() { ... } // from try @ 03375870 with catch @ 033754b4 */
      return;
    }
    pSVar2 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
    local_24[0] = OPNMPAJKDMI__OFGAMIMEOEH(NLFMDIGKNGP,(MethodInfo *)0x0);
    arg2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_24);
    pSVar2 = System_String__Format
                       (StringLiteral_22405,StringLiteral_5741,(Il2CppObject *)pSVar2,arg2,
                        (MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
    OPNMPAJKDMI__IGDDDCBHNOF(NLFMDIGKNGP,(MethodInfo *)0x0);
    pAVar4 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
    bVar1 = OPNMPAJKDMI__OFGAMIMEOEH(NLFMDIGKNGP,(MethodInfo *)0x0);
    if (pAVar4 != (AJDHCLBLGMI_o *)0x0) {
      iVar3 = 4;
      if (!bVar1) {
        iVar3 = 5;
      }
      (pAVar4->fields).ICBBFDJOHHF = iVar3;
      __this_00 = (__this->fields).OKNKKHGBECG;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

