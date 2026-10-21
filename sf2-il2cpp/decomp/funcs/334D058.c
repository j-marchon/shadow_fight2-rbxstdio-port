// PFOMHOLCODE$$.ctor @ RVA 0x334D058

void PFOMHOLCODE___ctor(PFOMHOLCODE_o *__this,MethodInfo *method)

{
  System_Char_array *pSVar1;
  System_Collections_Generic_List_NBLEEDEAPHB__o *__this_00;
  System_Collections_Generic_List_NBLEEDEAPHB__o **ppSVar2;
  System_Collections_Generic_List_PFOMHOLCODE_JLFFOOCNIIO__o *__this_01;
  System_String_o **ppSVar3;
  UnityEngine_Vector2_Fields UVar4;
  
  if ((DAT_04567a11 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFOMHOLCODE_JLFFOOCNIIO>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PFOMHOLCODE_JLFFOOCNIIO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567a11 = 1;
  }
  pSVar1 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (pSVar1 != (System_Char_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = 0x7c;
      (__this->fields).HCCPFEBLKLM = pSVar1;
      thunk_FUN_01c20e04();
      (__this->fields).JEHFOBHMGJM = StringLiteral_1;
      thunk_FUN_01c20e04();
      (__this->fields).IEPECMCLKJB = StringLiteral_1;
      thunk_FUN_01c20e04();
      (__this->fields).ACCIHBHMFPN = StringLiteral_1;
      thunk_FUN_01c20e04();
      (__this->fields).LFKENPEPPAL = StringLiteral_1;
      thunk_FUN_01c20e04();
      ppSVar3 = &(__this->fields).NBEADFFAJCJ;
      *ppSVar3 = StringLiteral_1;
      thunk_FUN_01c20e04(ppSVar3);
      (__this->fields).EBAEBONPCMI = 1.0;
      if (DAT_0455fa75 == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa75 = '\x01';
      }
      UVar4 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
      (__this->fields).ACPDELFFFHF = true;
      (__this->fields).FJEOCFCNIKM = true;
      (__this->fields).CILDLHDCCLG.fields = UVar4;
      (__this->fields).MFNPBMMANMD = StringLiteral_1;
      thunk_FUN_01c20e04();
      __this_00 = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
      ppSVar2 = &(__this->fields).FCOIPKFOGMM;
      *ppSVar2 = __this_00;
      thunk_FUN_01c20e04(ppSVar2,__this_00);
      __this_01 = (System_Collections_Generic_List_PFOMHOLCODE_JLFFOOCNIIO__o *)
                  thunk_FUN_01bda818(
                                    System_Collections_Generic_List<PFOMHOLCODE_JLFFOOCNIIO>_TypeInfo
                                    );
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<PFOMHOLCODE_JLFFOOCNIIO>__ctor__);
      (__this->fields).IDMHBKIMEGE = __this_01;
      thunk_FUN_01c20e04(&(__this->fields).IDMHBKIMEGE,__this_01);
      (__this->fields).NALNGBONGPJ = 5;
      (__this->fields).MFPCBDADFJL = StringLiteral_1;
      thunk_FUN_01c20e04(&(__this->fields).MFPCBDADFJL);
      BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

