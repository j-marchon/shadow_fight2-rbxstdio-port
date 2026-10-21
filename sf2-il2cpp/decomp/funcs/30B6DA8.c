// Nekki.SF2.GUI.TextPic$$ICFBFBMGPGC @ RVA 0x30B6DA8

void Nekki_SF2_GUI_TextPic__ICFBFBMGPGC
               (Nekki_SF2_GUI_TextPic_o *__this,System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_String_o *ODAMFBHJKIH;
  Nekki_SF2_GUI_StrikeThroughTextLine_o *pNVar3;
  UnityEngine_Transform_o *JJHEGPBBMLG;
  System_Action_o *pSVar4;
  System_Predicate_Glyph__o **ppSVar5;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Predicate_Glyph__o *match;
  System_String_o *x_00;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o HCPAAIJOOKK;
  System_String_o *local_38;
  
                    /* try { // try from 031b6db8 to 032b6dbf has its CatchHandler @ 031b7088 */
  local_38 = JLNPKGGFFDD;
  if ((DAT_04566203 & 1) == 0) {
                    /* try { // try from 031b6dd0 to 032b6ddb has its CatchHandler @ 031b6e9c */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<StrikeThroughTextLine>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Find__);
                    /* try { // try from 031b6de8 to 032b6e03 has its CatchHandler @ 031b6eb4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Predicate<Glyph>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 031b6e18 to 032b6e23 has its CatchHandler @ 031b6eb0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_<>c_HHPLKKIOCKH__);
                    /* try { // try from 031b6e24 to 032b6e33 has its CatchHandler @ 031b6ea8 */
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_<>c_TypeInfo);
    DAT_04566203 = 1;
  }
                    /* try { // try from 031b6e38 to 032b6e57 has its CatchHandler @ 031b6eac */
  if (JLNPKGGFFDD == (System_String_o *)0x0) {
    JLNPKGGFFDD = string_TypeInfo->static_fields->Empty;
    local_38 = JLNPKGGFFDD;
  }
  bVar2 = UnityEngine_UI_Text__get_supportRichText
                    ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 031b6e6c to 032b6e77 has its CatchHandler @ 031b6ea4 */
    ODAMFBHJKIH = AEGOLGIJEBI__FPLAOOJFKGJ(JLNPKGGFFDD,(MethodInfo *)0x0);
                    /* try { // try from 031b6e78 to 032b6e97 has its CatchHandler @ 031b6ea0 */
    x_00 = (__this->fields)._KOKCPBMJANE_k__BackingField;
    local_38 = ODAMFBHJKIH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 031b6e98 to 032b6ec7 has its CatchHandler @ 031b68b4 */
                    /* catch() { ... } // from try @ 031b6dd0 with catch @ 031b6e9c */
                    /* catch() { ... } // from try @ 031b6e78 with catch @ 031b6ea0 */
                    /* catch() { ... } // from try @ 031b6e6c with catch @ 031b6ea4 */
    ppSVar1 = &(__this->fields)._KOKCPBMJANE_k__BackingField;
                    /* catch() { ... } // from try @ 031b6e24 with catch @ 031b6ea8 */
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b6e38 with catch @ 031b6eac */
                    /* catch() { ... } // from try @ 031b6e18 with catch @ 031b6eb0 */
                    /* catch() { ... } // from try @ 031b6de8 with catch @ 031b6eb4 */
    if ((bVar2) && (bVar2 = AEGOLGIJEBI__PJANGFCAOLJ(ODAMFBHJKIH,(MethodInfo *)0x0), bVar2)) {
                    /* try { // try from 031b6ec8 to 032b6edf has its CatchHandler @ 031b7070 */
      pNVar3 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)
               UnityEngine_Component__GetComponentInChildren<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponentInChildren<StrikeThroughTextLine>__
                         );
      if (pNVar3 == (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) {
        JJHEGPBBMLG = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031b6ee8 to 032b6eeb has its CatchHandler @ 031b7064 */
                    /* try { // try from 031b6eec to 032b6ef7 has its CatchHandler @ 031b705c */
        if ((Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031b6efc to 032b6f17 has its CatchHandler @ 031b706c */
          thunk_FUN_01ba7564(Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo);
        }
        pNVar3 = Nekki_SF2_GUI_StrikeThroughTextLine__Instantiate(JJHEGPBBMLG,(MethodInfo *)0x0);
      }
      *ppSVar1 = (System_String_o *)pNVar3;
                    /* try { // try from 031b6f1c to 032b6f2b has its CatchHandler @ 031b7058 */
      thunk_FUN_01c20e04(ppSVar1);
    }
    pNVar3 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)*ppSVar1;
    if (pNVar3 != (Nekki_SF2_GUI_StrikeThroughTextLine_o *)0x0) {
                    /* try { // try from 031b6f2c to 032b7023 has its CatchHandler @ 031b68b4 */
      HCPAAIJOOKK.fields.r =
           (*(__this->klass->vtable)._22_get_color.methodPtr)
                     (__this,(__this->klass->vtable)._22_get_color.method);
      HCPAAIJOOKK.fields.g = (float)in_s1;
      HCPAAIJOOKK.fields.a = (float)in_s3;
      HCPAAIJOOKK.fields.b = (float)in_s2;
      Nekki_SF2_GUI_StrikeThroughTextLine__ParseText(pNVar3,&local_38,HCPAAIJOOKK,(MethodInfo *)0x0)
      ;
    }
    pSVar4 = (__this->fields).NFECDKAEFJL;
    if (pSVar4 != (System_Action_o *)0x0) {
      method_00 = (MethodInfo *)0x1;
      Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__CJEEDJHKDBE
                ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar4,&local_38,true,in_x3);
      Nekki_SF2_GUI_TextPic__ParseGlyhs(__this,&local_38,method_00);
      __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
      if ((Nekki_SF2_GUI_TextPic_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = Nekki_SF2_GUI_TextPic_<>c_TypeInfo->static_fields->__9__51_0;
      if (match == (System_Predicate_Glyph__o *)0x0) {
        if ((Nekki_SF2_GUI_TextPic_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = (System_Predicate_Glyph__o *)thunk_FUN_01bda818(System_Predicate<Glyph>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar5 = &Nekki_SF2_GUI_TextPic_<>c_TypeInfo->static_fields->__9__51_0;
        *ppSVar5 = match;
        thunk_FUN_01c20e04(ppSVar5,match);
      }
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List<object>__Find
                      (__this_00,(System_Predicate_T__o *)match,
                       Method_System_Collections_Generic_List<Glyph>_Find__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 031b7024 to 032b7027 has its CatchHandler @ 031b7084 */
                    /* try { // try from 031b7028 to 032b702f has its CatchHandler @ 031b68b4 */
                    /* try { // try from 031b7030 to 032b7037 has its CatchHandler @ 031b7068 */
        bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 031b7038 to 032b7047 has its CatchHandler @ 031b68b4 */
        *(bool *)&(__this->fields).POHAMNFPKNM = bVar2;
        return;
      }
    }
  }
  else {
    pSVar4 = (__this->fields).NFECDKAEFJL;
    if (pSVar4 != (System_Action_o *)0x0) {
                    /* try { // try from 031b7048 to 032b7057 has its CatchHandler @ 031b7060 */
      Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__CJEEDJHKDBE
                ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)pSVar4,&local_38,true,in_x3);
                    /* catch() { ... } // from try @ 031b6f1c with catch @ 031b7058 */
                    /* catch() { ... } // from try @ 031b6eec with catch @ 031b705c */
                    /* catch() { ... } // from try @ 031b7048 with catch @ 031b7060 */
                    /* catch() { ... } // from try @ 031b6ee8 with catch @ 031b7064 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031b7030 with catch @ 031b7068 */
  FUN_01bab8c8();
}

