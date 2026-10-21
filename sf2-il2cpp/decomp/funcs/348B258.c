// NEFKBLNBOAB$$BKCFPHNEONL @ RVA 0x348B258

bool NEFKBLNBOAB__BKCFPHNEONL
               (NEFKBLNBOAB_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,LDBDCAICCPP_o *EJLPDCKEJFJ,
               MethodInfo *method)

{
  bool bVar1;
  undefined1 uVar2;
  System_String_o *CJNHFNHJHPE;
  System_Xml_XmlDocument_o *pSVar3;
  
  if (EJLPDCKEJFJ == (LDBDCAICCPP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  CJNHFNHJHPE = (System_String_o *)
                (*(EJLPDCKEJFJ->klass->vtable)._5_unknown.methodPtr)
                          (EJLPDCKEJFJ,(__this->fields).DAIOCIKMNFD,
                           (EJLPDCKEJFJ->klass->vtable)._5_unknown.method);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields).HGCCJGDKCLH;
  }
  pSVar3 = GIAMPEGMNHE__KGEKFIHAHLJ(CJNHFNHJHPE,true,false,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0358b2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
                    (__this,GALCGHPGAIB,pSVar3,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return (bool)uVar2;
}

