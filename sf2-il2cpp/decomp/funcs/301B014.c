// JHJLHLANACF$$BBCAMJDDOII @ RVA 0x301B014

void JHJLHLANACF__BBCAMJDDOII
               (JHJLHLANACF_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *PGPLLGEIFPI,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)PGPLLGEIFPI;
  if ((DAT_04565c0d & 1) == 0) {
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&StringLiteral_5469);
    DAT_04565c0d = 1;
    method_00 = extraout_x1;
  }
  if ((__this->fields).NLFHMFAOGCD != false) {
    (__this->fields).NLFHMFAOGCD = false;
    JHJLHLANACF__POBKBBAGBJE(__this,method_00);
  }
  if ((PGPLLGEIFPI != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) &&
     (pIVar3 = (PGPLLGEIFPI->fields).KOANCCDDBDA, pIVar3 != (Il2CppObject *)0x0)) {
    bVar1 = (ECENNHNBAME_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pIVar3->klass->_2).naturalAligment) &&
       ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)ECENNHNBAME_TypeInfo))
    {
      bVar2 = System_String__op_Equality(pIVar3[6].monitor,StringLiteral_5469,(MethodInfo *)0x0);
      if (bVar2) {
        (__this->fields).NLFHMFAOGCD = true;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

