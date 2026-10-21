// AJMOIOIBPGP$$JMDIHKNADLB @ RVA 0x3272FD4

void AJMOIOIBPGP__JMDIHKNADLB(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  int64_t iVar1;
  ACHLOMELAJE_o *__this_00;
  System_String_o *pSVar2;
  Il2CppObject *arg2;
  AJDHCLBLGMI_o *pAVar3;
  long local_48;
  
  if ((DAT_04567235 & 1) == 0) {
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22404);
    FUN_01bab630(&StringLiteral_12365);
    DAT_04567235 = 1;
  }
  if (NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) {
    iVar1 = OPNMPAJKDMI__EFKCEGNGGOI(NLFMDIGKNGP,(MethodInfo *)0x0);
    OPNMPAJKDMI__GLIPIKHCNCO(NLFMDIGKNGP,(MethodInfo *)0x0);
    pAVar3 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
    if (pAVar3 != (AJDHCLBLGMI_o *)0x0) {
      (pAVar3->fields).ICBBFDJOHHF = 1;
      (pAVar3->fields).MMLIJBKEBHC = (pAVar3->fields).MMLIJBKEBHC + 1;
      __this_00 = (__this->fields).OKNKKHGBECG;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        pSVar2 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_48 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM - iVar1;
        arg2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_48);
        pSVar2 = System_String__Format
                           (StringLiteral_22404,StringLiteral_12365,(Il2CppObject *)pSVar2,arg2,
                            (MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

