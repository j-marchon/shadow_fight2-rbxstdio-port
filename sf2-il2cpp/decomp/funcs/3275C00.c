// AJMOIOIBPGP$$HGMNGIOAAMC @ RVA 0x3275C00

void AJMOIOIBPGP__HGMNGIOAAMC(AJMOIOIBPGP_o *__this,NCCFNKMICGK_o *CJNHFNHJHPE,MethodInfo *method)

{
  byte bVar1;
  OPNMPAJKDMI_c *pOVar2;
  OPNMPAJKDMI_o *pOVar3;
  
  if ((DAT_04567240 & 1) == 0) {
    FUN_01bab630(&OPNMPAJKDMI_TypeInfo);
    DAT_04567240 = 1;
  }
  pOVar2 = OPNMPAJKDMI_TypeInfo;
  if (CJNHFNHJHPE == (NCCFNKMICGK_o *)0x0) {
    CJNHFNHJHPE = (NCCFNKMICGK_o *)0x0;
    (__this->fields).BAAIACCFAPH = (OPNMPAJKDMI_o *)0x0;
  }
  else {
    bVar1 = (OPNMPAJKDMI_TypeInfo->_2).naturalAligment;
    if ((CJNHFNHJHPE->klass->_2).naturalAligment < bVar1) {
      pOVar3 = (OPNMPAJKDMI_o *)0x0;
    }
    else {
      pOVar3 = (OPNMPAJKDMI_o *)CJNHFNHJHPE;
      if ((CJNHFNHJHPE->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)OPNMPAJKDMI_TypeInfo) {
        pOVar3 = (OPNMPAJKDMI_o *)0x0;
      }
    }
    (__this->fields).BAAIACCFAPH = pOVar3;
    if ((CJNHFNHJHPE->klass->_2).naturalAligment < bVar1) {
      CJNHFNHJHPE = (NCCFNKMICGK_o *)0x0;
    }
    else if ((CJNHFNHJHPE->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pOVar2) {
      CJNHFNHJHPE = (NCCFNKMICGK_o *)0x0;
    }
  }
  thunk_FUN_01c20e04(&(__this->fields).BAAIACCFAPH,CJNHFNHJHPE);
  return;
}

