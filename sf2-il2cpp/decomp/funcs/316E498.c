// JHHFDBLANPH$$EOHMFJFFFIN @ RVA 0x316E498

JHHFDBLANPH_o *
JHHFDBLANPH__EOHMFJFFFIN(System_String_o *EIJDDKJONFO,bool HCFJIALLIJJ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  JHHFDBLANPH_o *pJVar3;
  System_Xml_XmlDocument_o *EPHIMGPGNPK;
  MethodInfo *method_00;
  
  if ((DAT_04566908 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_get_Item__);
    FUN_01bab630(&JHHFDBLANPH_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566908 = 1;
  }
  if ((JHHFDBLANPH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           JHHFDBLANPH_TypeInfo->static_fields->EOPCNLCKANK;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)EIJDDKJONFO,
                       Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_ContainsKey__
                      );
    if (!bVar1) {
      method_00 = (MethodInfo *)0x1;
      EPHIMGPGNPK = GIAMPEGMNHE__IBJOMPOLPCC
                              (EIJDDKJONFO,StringLiteral_1,(uint)HCFJIALLIJJ,true,true,false,
                               (MethodInfo *)0x0);
      if (EPHIMGPGNPK == (System_Xml_XmlDocument_o *)0x0) {
        pJVar3 = (JHHFDBLANPH_o *)0x0;
      }
      else {
        pJVar3 = (JHHFDBLANPH_o *)thunk_FUN_01bda818(JHHFDBLANPH_TypeInfo);
        JHHFDBLANPH___ctor(pJVar3,EPHIMGPGNPK,EIJDDKJONFO,method_00);
        if ((JHHFDBLANPH_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 JHHFDBLANPH_TypeInfo->static_fields->EOPCNLCKANK;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_0326e618;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar2,(Il2CppObject *)EIJDDKJONFO,(Il2CppObject *)pJVar3,
                   Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_Add__);
      }
      return pJVar3;
    }
    if ((JHHFDBLANPH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             JHHFDBLANPH_TypeInfo->static_fields->EOPCNLCKANK;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pJVar3 = (JHHFDBLANPH_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)EIJDDKJONFO,
                          Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_get_Item__
                         );
      return pJVar3;
    }
  }
LAB_0326e618:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

