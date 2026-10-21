// NDPMLPGANCI$$MMEAMOLPALM @ RVA 0x344A590

int32_t NDPMLPGANCI__MMEAMOLPALM(int32_t FHLNEPNIODE,Il2CppObject *OCMMDIHLKMH,MethodInfo *method)

{
  byte bVar1;
  CHDGOFBHAFI_o *pCVar2;
  int32_t iVar3;
  
  if ((DAT_04568267 & 1) == 0) {
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568267 = 1;
  }
  if (FHLNEPNIODE == 4) {
    if (OCMMDIHLKMH != (Il2CppObject *)0x0) {
      bVar1 = (FFHKCJAOPLI_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (OCMMDIHLKMH->klass->_2).naturalAligment) &&
         ((OCMMDIHLKMH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)FFHKCJAOPLI_TypeInfo)) {
        if (OCMMDIHLKMH != (Il2CppObject *)0x0) {
          return *(int32_t *)&OCMMDIHLKMH[1].klass;
        }
        goto LAB_0354a684;
      }
    }
    iVar3 = 1;
  }
  else if (FHLNEPNIODE == 5) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar2 == (CHDGOFBHAFI_o *)0x0) {
LAB_0354a684:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = 0x10;
    if ((pCVar2->fields).BLELLCNDBHN != false) {
      iVar3 = 0x11;
    }
  }
  else if (FHLNEPNIODE == 7) {
    iVar3 = 10;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

