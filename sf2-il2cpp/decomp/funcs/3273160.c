// AJMOIOIBPGP$$KOOHANBJIIG @ RVA 0x3273160

void AJMOIOIBPGP__KOOHANBJIIG(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  AJDHCLBLGMI_o *pAVar3;
  
  if ((DAT_04567236 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_6857);
    DAT_04567236 = 1;
  }
  if (NLFMDIGKNGP != (OPNMPAJKDMI_o *)0x0) {
    pSVar2 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(StringLiteral_6857,pSVar2,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
    iVar1 = (*(NLFMDIGKNGP->klass->vtable)._14_NHGGBEACKBD.methodPtr)
                      (NLFMDIGKNGP,(NLFMDIGKNGP->klass->vtable)._14_NHGGBEACKBD.method);
    if (iVar1 != 1) {
      OPNMPAJKDMI__EIGMEGLAAKE(NLFMDIGKNGP,false,(MethodInfo *)0x0);
    }
    OPNMPAJKDMI__IGDDDCBHNOF(NLFMDIGKNGP,(MethodInfo *)0x0);
    pAVar3 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pAVar3 != (AJDHCLBLGMI_o *)0x0) {
      (pAVar3->fields).PJHEOJENEGI = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
      pAVar3 = (NLFMDIGKNGP->fields)._FBNKBJAJBJF_k__BackingField;
      if (pAVar3 != (AJDHCLBLGMI_o *)0x0) {
        (pAVar3->fields).ICBBFDJOHHF = 3;
        __this_00 = (__this->fields).OKNKKHGBECG;
        if (__this_00 != (ACHLOMELAJE_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
          AJMOIOIBPGP__GGMPJNLIHHM(__this,NLFMDIGKNGP,method_00);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

