// LAMJOHEKJNJ$$OJAKPICKBBC @ RVA 0x30A175C

void LAMJOHEKJNJ__OJAKPICKBBC
               (LAMJOHEKJNJ_o *__this,System_String_o *KGLJICLJHEL,bool MGAAKBCIIIC,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Xml_XmlNode_o *pSVar3;
  MethodInfo *method_00;
  Il2CppMethodPointer local_28;
  
  if ((DAT_04566142 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TryGetValue__);
    DAT_04566142 = 1;
  }
  local_28 = (Il2CppMethodPointer)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).DIKHJEINHID;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method_00 = (MethodInfo *)&stack0xffffffffffffffd8;
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)method_00,
                       Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TryGetValue__
                      );
    if (bVar1) {
      if (MGAAKBCIIIC) {
        LAMJOHEKJNJ__EKEDMLKAGIK(__this,KGLJICLJHEL,method_00);
      }
      if (local_28 != (Il2CppMethodPointer)0x0) {
        pSVar3 = (__this->fields)._OLIGHNIEIGK_k__BackingField;
        if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_031a1828;
        (*(pSVar3->klass->vtable)._25_RemoveChild.methodPtr)
                  (pSVar3,*(undefined8 *)(local_28 + 0x20),
                   (pSVar3->klass->vtable)._25_RemoveChild.method);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).DIKHJEINHID;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_031a1828;
      System_Collections_Generic_Dictionary<object,_object>__Remove
                (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                 Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_Remove__);
    }
    return;
  }
LAB_031a1828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

