// TypeDefIndex 804
// Namespace: 
// public class GAEHKDPPOBL : BOFEMGGNODC
// Fields:
//   private string POCNHBONDGB; // 0x68
//   private string KOGCJJABJHN; // 0x70
//   private GAEHKDPPOBL.FHLFOGLOCII JBLIGNDDFLK; // 0x78
//   private bool AMEMBOKNDHB; // 0x7C

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3072C70]
// GAEHKDPPOBL$$HNIHOIAMDPC @ RVA 0x3072C70

void GAEHKDPPOBL__HNIHOIAMDPC
               (GAEHKDPPOBL_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04565f8b & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_6472/*"First"*/);
    FUN_01bab630(&StringLiteral_5354/*"DialogType"*/);
    FUN_01bab630(&StringLiteral_2810/*"All"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_9152/*"Mode"*/);
    DAT_04565f8b = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9152/*"Mode"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_6472/*"First"*/,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar4,StringLiteral_2810/*"All"*/,(MethodInfo *)0x0);
      (__this->fields).JBLIGNDDFLK = (uint)bVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_5354/*"DialogType"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).POCNHBONDGB = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_3508/*"Block"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).POCNHBONDGB;
          (__this->fields).AMEMBOKNDHB = bVar1;
          if (pSVar4 != (System_String_o *)0x0) {
            pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
            ppSVar5 = &(__this->fields).KOGCJJABJHN;
            *ppSVar5 = pSVar4;
            thunk_FUN_01c20e04(ppSVar5,pSVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3072E14]
// GAEHKDPPOBL$$.ctor @ RVA 0x3072E14

void GAEHKDPPOBL___ctor(GAEHKDPPOBL_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3072E1C]
// GAEHKDPPOBL$$MAHFCKJGBPP @ RVA 0x3072E1C

void GAEHKDPPOBL__MAHFCKJGBPP(GAEHKDPPOBL_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  GCIFMNHADDF_o *pGVar5;
  System_Type_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_BaseDialog__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565f8c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseDialog>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseDialog>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseDialog>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseDialog>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_10648/*"QuestActionBlockDialogTouches::RunAction: didn't Found dialog: "*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    FUN_01bab630(&StringLiteral_16393/*"all"*/);
    DAT_04565f8c = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pGVar5 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pGVar5 != (GCIFMNHADDF_o *)0x0) {
    __this_01 = (pGVar5->fields).IMMJEIGBAAC;
    bVar2 = System_String__op_Equality
                      ((__this->fields).KOGCJJABJHN,StringLiteral_16393/*"all"*/,(MethodInfo *)0x0);
    if (__this_01 != (System_Collections_Generic_List_BaseDialog__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<BaseDialog>_GetEnumerator__);
      bVar1 = false;
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      do {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_70,
                             Method_System_Collections_Generic_List_Enumerator<BaseDialog>_MoveNext__
                            );
          __this_00 = local_70.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<BaseDialog>_Dispose__);
            if ((!bVar1) && ((__this->fields).AMEMBOKNDHB != false)) {
              pSVar7 = System_String__Concat
                                 (StringLiteral_10648/*"QuestActionBlockDialogTouches::RunAction: didn't Found dialog: "*/,(__this->fields).POCNHBONDGB,(MethodInfo *)0x0
                                 );
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
            }
            goto LAB_03173068;
          }
          if ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)local_70.fields._current ==
              (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = System_Object__GetType(local_70.fields._current,(MethodInfo *)0x0);
          if (pSVar6 == (System_Type_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = (System_String_o *)
                   (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._3_ToString.method);
          if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = System_String__ToLower(pSVar7,(MethodInfo *)0x0);
          if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar3 = System_String__Contains(pSVar7,StringLiteral_1377/*"."*/,(MethodInfo *)0x0);
          if (bVar3) {
            iVar4 = System_String__LastIndexOf(pSVar7,StringLiteral_1377/*"."*/,(MethodInfo *)0x0);
            pSVar7 = System_String__Substring(pSVar7,iVar4 + 1,(MethodInfo *)0x0);
          }
          bVar3 = System_String__op_Equality(pSVar7,(__this->fields).KOGCJJABJHN,(MethodInfo *)0x0);
        } while (!bVar2 && !bVar3);
        Nekki_SF2_GUI_Dialogs_BaseDialog__EnableTouchBlock
                  ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this_00,(__this->fields).AMEMBOKNDHB,
                   (MethodInfo *)0x0);
        bVar1 = true;
      } while (bVar2 || (__this->fields).JBLIGNDDFLK != 0);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<BaseDialog>_Dispose__);
LAB_03173068:
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

