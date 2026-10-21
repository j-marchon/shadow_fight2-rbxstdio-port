// TypeDefIndex 2102
// Namespace: 
// public class FKGDENPCMPH : IENLNOEDCFF
// Fields:
//   private string NPFMOEOIEKM; // 0x28

// ===== private bool EBGIANGIHFF(List<HEFOANCOHDC> GJBLBEALOBO)  [RVA 0x32CAD1C]
// FKGDENPCMPH$$EBGIANGIHFF @ RVA 0x32CAD1C

bool FKGDENPCMPH__EBGIANGIHFF
               (FKGDENPCMPH_o *__this,System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567519 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<HEFOANCOHDC>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    DAT_04567519 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar1 = IBLAPCINJBO__BDLEIEHBFAD<object>
                    ((System_Collections_Generic_List_T__o *)GJBLBEALOBO,
                     Method_IBLAPCINJBO_BDLEIEHBFAD<HEFOANCOHDC>__);
  if (bVar1) {
    bVar1 = false;
  }
  else {
    if (GJBLBEALOBO == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)GJBLBEALOBO,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
      if (!bVar1) {
        iVar3 = 6;
        goto LAB_033cae0c;
      }
    } while ((local_48.fields._current == (Il2CppObject *)0x0) ||
            (bVar2 = System_String__op_Equality
                               ((__this->fields).NPFMOEOIEKM,
                                (System_String_o *)local_48.fields._current[4].klass,
                                (MethodInfo *)0x0), !bVar2));
    iVar3 = 5;
LAB_033cae0c:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    bVar1 = bVar1 && iVar3 == 5;
  }
  return bVar1;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x32CAEC4]
// FKGDENPCMPH$$KCHJCGEMCGE @ RVA 0x32CAEC4

System_String_o * FKGDENPCMPH__KCHJCGEMCGE(FKGDENPCMPH_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x32CAECC]
// FKGDENPCMPH$$.ctor @ RVA 0x32CAECC

void FKGDENPCMPH___ctor(FKGDENPCMPH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456751a & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456751a = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0xf,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).NPFMOEOIEKM;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x32CAF78]
// FKGDENPCMPH$$EPBENPDCBFE @ RVA 0x32CAF78

bool FKGDENPCMPH__EPBENPDCBFE(FKGDENPCMPH_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  OIGAJAKPPEO_o *pOVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO;
  PJKHAJKEHEL_o *pPVar4;
  
  switch((__this->fields).super.LOAFPIOGJAF) {
  case 1:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    GJBLBEALOBO = (AHEFOIOKDOK->fields).OOFILGKHDDI;
    break;
  case 2:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    goto LAB_033cb014;
  case 3:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    pOVar2 = (AHEFOIOKDOK->fields).GGIGKNJPODI;
    if ((pOVar2 == (OLKKAIFGGAK_o *)0x0) ||
       (pOVar2 = (pOVar2->fields).NFMBPIPEKGF, pOVar2 == (OLKKAIFGGAK_o *)0x0)) goto LAB_033cb084;
    pPVar4 = (pOVar2->fields).FAPMJJBOFEF;
joined_r0x033cb078:
    if (pPVar4 == (PJKHAJKEHEL_o *)0x0) {
LAB_033cb0d0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    GJBLBEALOBO = (pPVar4->fields).INGEFFGPJPB;
    break;
  case 4:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    pOVar2 = (AHEFOIOKDOK->fields).GGIGKNJPODI;
    if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
      pOVar3 = OLKKAIFGGAK__IHEAMKEDGFH(pOVar2,(MethodInfo *)0x0);
joined_r0x033cb070:
      if (pOVar3 != (OIGAJAKPPEO_o *)0x0) {
        pPVar4 = (pOVar3->fields).super.FAPMJJBOFEF;
        goto joined_r0x033cb078;
      }
    }
    goto LAB_033cb084;
  case 5:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    bVar1 = FKGDENPCMPH__EBGIANGIHFF(__this,(AHEFOIOKDOK->fields).OOFILGKHDDI,method);
    if (!bVar1) goto switchD_033cafac_default;
LAB_033cb014:
    GJBLBEALOBO = (AHEFOIOKDOK->fields).GIIIBDMEPDK;
    break;
  case 6:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    pOVar2 = (AHEFOIOKDOK->fields).GGIGKNJPODI;
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
      GJBLBEALOBO = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
    }
    else {
      pOVar2 = (pOVar2->fields).BPJMMBGIMNC;
      if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
        GJBLBEALOBO = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
      }
      else {
        pOVar3 = OLKKAIFGGAK__IHEAMKEDGFH(pOVar2,(MethodInfo *)0x0);
        if (pOVar3 == (OIGAJAKPPEO_o *)0x0) {
          GJBLBEALOBO = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
        }
        else {
          pPVar4 = (pOVar3->fields).super.FAPMJJBOFEF;
          if (pPVar4 == (PJKHAJKEHEL_o *)0x0) goto LAB_033cb0d0;
          GJBLBEALOBO = (pPVar4->fields).INGEFFGPJPB;
        }
      }
      if (__this == (FKGDENPCMPH_o *)0x0) goto LAB_033cb0d0;
    }
    break;
  case 7:
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033cb0d0;
    pOVar2 = (AHEFOIOKDOK->fields).GGIGKNJPODI;
    if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
      pOVar3 = (OIGAJAKPPEO_o *)OLKKAIFGGAK__IPJMKMJAIMK(pOVar2,(MethodInfo *)0x0);
      goto joined_r0x033cb070;
    }
LAB_033cb084:
    GJBLBEALOBO = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
    break;
  default:
switchD_033cafac_default:
    bVar1 = false;
    goto LAB_033cb090;
  }
  bVar1 = FKGDENPCMPH__EBGIANGIHFF(__this,GJBLBEALOBO,method);
LAB_033cb090:
                    /* try { // try from 033cb0a0 to 034cb25f has its CatchHandler @ 033cb0a0
                       catch() { ... } // from try @ 033cb0a0 with catch @ 033cb0a0
                       catch() { ... } // from try @ 033cb34c with catch @ 033cb0a0
                       catch() { ... } // from try @ 033cb38c with catch @ 033cb0a0
                       catch() { ... } // from try @ 033cb3d0 with catch @ 033cb0a0
                       catch() { ... } // from try @ 033cb400 with catch @ 033cb0a0 */
  bVar1 = IENLNOEDCFF__DEBLNLJEJKG((IENLNOEDCFF_o *)__this,bVar1,(MethodInfo *)0x0);
  return bVar1;
}

