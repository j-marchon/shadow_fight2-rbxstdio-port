// Nekki.SF2.GUI.Dialogs.StoryDialog$$.ctor @ RVA 0x32C23B8

void Nekki_SF2_GUI_Dialogs_StoryDialog___ctor
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *__this_00;
  MethodInfo *extraout_x1;
  float fVar2;
  UnityEngine_Vector2_Fields UVar3;
  
  if ((DAT_045674d3 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045674d3 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  fVar2 = MGNPHCAAEIO__NKPJJJDKFBG((MethodInfo *)0x0);
  (__this->fields).OAMNJIMNBAC = fVar2;
  (__this->fields).NBGPOPHLIFC = 1.0;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  UVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  (__this->fields).ACPDELFFFHF = true;
  (__this->fields).LPEFIPGJDJH = 0x78;
  (__this->fields).CILDLHDCCLG.fields = UVar3;
  (__this->fields).ECIEHGDKKGO = true;
  pSVar1 = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
  (__this->fields).NMBDHGCKNII = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).NMBDHGCKNII,pSVar1);
  (__this->fields).DHLCIGNKKPP = StringLiteral_1;
  thunk_FUN_01c20e04(&(__this->fields).DHLCIGNKKPP);
  (__this->fields).FKDKFGIFBIJ = true;
  (__this->fields).BGANBKJCMNM = StringLiteral_1;
  thunk_FUN_01c20e04(&(__this->fields).BGANBKJCMNM);
  (__this->fields).LBEMKAMMEFG = 0x7fffffff;
  pSVar1 = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
  (__this->fields).OMJHNOCDBEH = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).OMJHNOCDBEH,pSVar1);
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>__ctor__);
  (__this->fields).PKCGAKMEKFG = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).PKCGAKMEKFG,__this_00);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

