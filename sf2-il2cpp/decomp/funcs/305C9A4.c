// ACHLOMELAJE$$GCBKEAIBFLO @ RVA 0x305C9A4

bool ACHLOMELAJE__GCBKEAIBFLO
               (ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,bool EAPGKJCLEAN,
               MethodInfo *method)

{
  System_String_o *BCPAFBNLBDE;
  System_String_o *BCPAFBNLBDE_00;
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)EAPGKJCLEAN;
  if ((DAT_04565e9b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8598);
    FUN_01bab630(&StringLiteral_12000);
    DAT_04565e9b = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if ((bVar1) ||
     (bVar1 = ACHLOMELAJE__OKLLAOCGDCP(__this,KGLJICLJHEL,method_00),
     BCPAFBNLBDE_00 = StringLiteral_12000, BCPAFBNLBDE = StringLiteral_8598, bVar1)) {
    bVar1 = false;
  }
  else {
    if (EAPGKJCLEAN) {
      pSVar2 = (__this->fields).super.HJKLIDCAEOE;
      if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0315cad8;
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                         (pSVar2,StringLiteral_12000,(pSVar2->klass->vtable)._51_get_Item.method);
      if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
        pSVar2 = EIABCPKDEBD__KPODFFHOHGK
                           ((__this->fields).super.HJKLIDCAEOE,BCPAFBNLBDE_00,(MethodInfo *)0x0);
      }
      pSVar2 = EIABCPKDEBD__KPODFFHOHGK(pSVar2,BCPAFBNLBDE,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__HBGAGFJBGKD(pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_0315cad8;
      (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                (pSVar3,KGLJICLJHEL,(pSVar3->klass->vtable)._10_set_Value.method);
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).CNOABMOGJGB;
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_0315cad8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_HashSet<object>__Add
              (__this_00,(Il2CppObject *)KGLJICLJHEL,
               Method_System_Collections_Generic_HashSet<string>_Add__);
    bVar1 = true;
  }
  return bVar1;
}

