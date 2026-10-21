// TypeDefIndex 3027
// Namespace: 
// public class KAFMFFDFDBL : IENLNOEDCFF
// Fields:
//   private KAFMFFDFDBL.LIHIFIABAJF HHHHNPIKMMJ; // 0x28
//   private List<IENLNOEDCFF> INAJMPIJJOG; // 0x30

// ===== public KAFMFFDFDBL.LIHIFIABAJF NHGGBEACKBD()  [RVA 0x34B3D60]
// KAFMFFDFDBL$$NHGGBEACKBD @ RVA 0x34B3D60

int32_t KAFMFFDFDBL__NHGGBEACKBD(KAFMFFDFDBL_o *__this,MethodInfo *method)

{
  return (__this->fields).HHHHNPIKMMJ;
}


// ===== public bool CFANNGPGDPJ(NJPBHDMCLIN AHEFOIOKDOK, OLKKAIFGGAK BCKBBGCOMJD, KJFPGDFNFCL FKDOMEBPFPF)  [RVA 0x34B3D68]
// KAFMFFDFDBL$$CFANNGPGDPJ @ RVA 0x34B3D68

bool KAFMFFDFDBL__CFANNGPGDPJ
               (KAFMFFDFDBL_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,OLKKAIFGGAK_o *BCKBBGCOMJD,
               KJFPGDFNFCL_o *FKDOMEBPFPF,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = KAFMFFDFDBL__NIHJAGFBOKF(__this,AHEFOIOKDOK,BCKBBGCOMJD,FKDOMEBPFPF,method);
  return bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
}


// ===== private bool NIHJAGFBOKF(NJPBHDMCLIN AHEFOIOKDOK, OLKKAIFGGAK BCKBBGCOMJD, KJFPGDFNFCL FKDOMEBPFPF)  [RVA 0x34B3D90]
// KAFMFFDFDBL$$NIHJAGFBOKF @ RVA 0x34B3D90

bool KAFMFFDFDBL__NIHJAGFBOKF
               (KAFMFFDFDBL_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,OLKKAIFGGAK_o *BCKBBGCOMJD,
               KJFPGDFNFCL_o *FKDOMEBPFPF,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568572 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    DAT_04568572 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).INAJMPIJJOG;
  if (__this_00 == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
  do {
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
        bVar3 = (__this->fields).HHHHNPIKMMJ == 0;
        goto LAB_035b3e8c;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                        (local_48.fields._current,AHEFOIOKDOK,
                         (local_48.fields._current)->klass->vtable[4].method);
      iVar1 = (__this->fields).HHHHNPIKMMJ;
      if ((bVar3 & 1) != 0) break;
      if (iVar1 == 0) goto LAB_035b3e64;
    }
  } while (iVar1 != 1);
LAB_035b3e64:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
LAB_035b3e8c:
  return (bool)(bVar3 & 1);
}


// ===== public List<IENLNOEDCFF> MFIECKACLFG()  [RVA 0x34B3F18]
// KAFMFFDFDBL$$MFIECKACLFG @ RVA 0x34B3F18

System_Collections_Generic_List_IENLNOEDCFF__o *
KAFMFFDFDBL__MFIECKACLFG(KAFMFFDFDBL_o *__this,MethodInfo *method)

{
  return (__this->fields).INAJMPIJJOG;
}


// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x34B3F20]
// KAFMFFDFDBL$$EPBENPDCBFE @ RVA 0x34B3F20

bool KAFMFFDFDBL__EPBENPDCBFE(KAFMFFDFDBL_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  KJFPGDFNFCL_o *in_x3;
  MethodInfo *in_x4;
  
  bVar1 = KAFMFFDFDBL__NIHJAGFBOKF(__this,AHEFOIOKDOK,(OLKKAIFGGAK_o *)method,in_x3,in_x4);
  return bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, List<IENLNOEDCFF> AHEFOIOKDOK)  [RVA 0x34B3F48]
// KAFMFFDFDBL$$.ctor @ RVA 0x34B3F48

void KAFMFFDFDBL___ctor(KAFMFFDFDBL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,
                       MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  System_Collections_Generic_List_IENLNOEDCFF__o **ppSVar2;
  
  if ((DAT_04568573 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&StringLiteral_9975/*"Or"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_04568573 = 1;
  }
  __this_00 = (System_Collections_Generic_List_IENLNOEDCFF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  ppSVar2 = &(__this->fields).INAJMPIJJOG;
  *ppSVar2 = __this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,8,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      a = GIAMPEGMNHE__LFCNNAGLPHO(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,StringLiteral_9975/*"Or"*/,(MethodInfo *)0x0);
      (__this->fields).HHHHNPIKMMJ = (uint)bVar1;
      (__this->fields).INAJMPIJJOG = AHEFOIOKDOK;
      thunk_FUN_01c20e04(ppSVar2,AHEFOIOKDOK);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

