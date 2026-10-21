// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionModelExists  (obfuscated AFJEGLNKCHN)
// TypeDefIndex 1052
// Namespace: 
// public class ConditionModelExists : ConditionAnimation
// Fields:
//   private string DEKCPPOJFEH; // 0x28

// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x30D5A4C]
// ConditionModelExists$$EPBENPDCBFE @ RVA 0x30D5A4C

bool ConditionModelExists__EPBENPDCBFE(ConditionModelExists_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  Model_o *pOVar2;
  System_Collections_Generic_List_OIGAJAKPPEO__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456632b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
    DAT_0456632b = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    pOVar2 = (AHEFOIOKDOK->fields).GGIGKNJPODI;
    if (pOVar2 == (Model_o *)0x0) {
      bVar1 = false;
    }
    else {
      pOVar2 = Model__GMBBOANEBJJ(pOVar2,(__this->fields).super.LOAFPIOGJAF,(MethodInfo *)0x0)
      ;
      if (pOVar2 == (Model_o *)0x0) goto LAB_031d5bb4;
      bVar1 = System_String__op_Equality
                        ((pOVar2->fields).NPFMOEOIEKM,(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0
                        );
      if (bVar1) {
        bVar1 = true;
LAB_031d5b88:
        bVar1 = ConditionAnimation__DEBLNLJEJKG((ConditionAnimation_o *)__this,bVar1,(MethodInfo *)0x0);
      }
      else {
        __this_00 = (pOVar2->fields).MPLCPGJEHPG;
        if (__this_00 == (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) goto LAB_031d5bb4;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_48,
                             Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__
                            );
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
            bVar1 = false;
            goto LAB_031d5b88;
          }
          if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = System_String__op_Equality
                            ((System_String_o *)local_48.fields._current[0x24].klass,
                             (__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
        } while (!bVar1);
        bVar1 = ConditionAnimation__DEBLNLJEJKG((ConditionAnimation_o *)__this,true,(MethodInfo *)0x0);
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
      }
    }
    return bVar1;
  }
LAB_031d5bb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x30D5C48]
// ConditionModelExists$$.ctor @ RVA 0x30D5C48

void ConditionModelExists___ctor(ConditionModelExists_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456632c & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_0456632c = 1;
  }
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,0x19,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM
                         (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).DEKCPPOJFEH;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

