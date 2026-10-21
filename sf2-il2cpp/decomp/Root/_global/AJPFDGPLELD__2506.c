// TypeDefIndex 2506
// Namespace: 
// public class AJPFDGPLELD : ILGLOCBJFEG
// Fields:
//   private string ECFLPECDPML; // 0x38
//   private string OBMADELOAPG; // 0x40

// ===== public override bool EPBENPDCBFE(OLKKAIFGGAK BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x338B1C4]
// AJPFDGPLELD$$EPBENPDCBFE @ RVA 0x338B1C4

bool AJPFDGPLELD__EPBENPDCBFE
               (AJPFDGPLELD_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  OLKKAIFGGAK_o *__this_01;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_02;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567bd9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567bd9 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_01 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return false;
  }
  if (__this_01 != (OLKKAIFGGAK_o *)0x0) {
    __this_02 = OLKKAIFGGAK__LKACBDNEJON(__this_01,(MethodInfo *)0x0);
    iVar4 = JADGCGOJLJB__PKKPCLFNEDC((__this->fields).OBMADELOAPG,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).ECFLPECDPML;
    if ((pSVar6 != (System_String_o *)0x0) &&
       (bVar2 = System_String__Equals(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0),
       __this_02 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      bVar1 = iVar4 == 0;
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__
                          );
        __this_00 = local_70.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
          return (bool)(bVar1 & bVar2);
        }
        if (bVar2 == false) {
          if ((JADGCGOJLJB_o *)local_70.fields._current == (JADGCGOJLJB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (__this->fields).ECFLPECDPML;
          if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__Equals
                            (pSVar6,((JADGCGOJLJB_Fields *)((long)local_70.fields._current + 0x10))
                                    ->JIJLBFGKNJK,(MethodInfo *)0x0);
        }
        else {
          bVar2 = true;
        }
        bVar3 = !bVar1;
        bVar1 = true;
        if (bVar3) {
          if ((JADGCGOJLJB_o *)__this_00 == (JADGCGOJLJB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar5 = JADGCGOJLJB__NHGGBEACKBD((JADGCGOJLJB_o *)__this_00,(MethodInfo *)0x0);
          bVar1 = iVar4 == iVar5;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x338B408]
// AJPFDGPLELD$$.ctor @ RVA 0x338B408

void AJPFDGPLELD___ctor(AJPFDGPLELD_o *__this,MethodInfo *method)

{
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,6,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x338B42C]
// AJPFDGPLELD$$HNIHOIAMDPC @ RVA 0x338B42C

void AJPFDGPLELD__HNIHOIAMDPC
               (AJPFDGPLELD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567bda & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567bda = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).ECFLPECDPML = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).OBMADELOAPG;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

