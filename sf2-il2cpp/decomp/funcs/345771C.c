// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$NHMPMKNIHBP @ RVA 0x345771C

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__NHMPMKNIHBP
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  System_Text_StringBuilder_o *pSVar5;
  int *piVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  long lVar10;
  Il2CppClass *pIVar11;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_ODJJOAOCFKO_o *pJVar12;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_KBAIDAHOMHA__o *pSVar13;
  UnityEngine_UI_ScrollRect_o *pUVar14;
  long lVar15;
  int iVar16;
  UnityEngine_GameObject_o *pUVar17;
  long *plVar18;
  int iVar19;
  float value;
  undefined4 local_64;
  
                    /* try { // try from 0355771c to 0365773f has its CatchHandler @ 03558180 */
                    /* try { // try from 03557740 to 0365774b has its CatchHandler @ 03557eb8 */
  if ((DAT_045682d2 & 1) == 0) {
                    /* try { // try from 0355774c to 03657757 has its CatchHandler @ 03557eb4 */
    FUN_01bab630(&Method_System_Array_Empty<object>__);
                    /* try { // try from 03557760 to 03657767 has its CatchHandler @ 03557eb0 */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ProbabilityDialogItem>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03557778 to 0365777f has its CatchHandler @ 03557eac */
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 03557784 to 0365778b has its CatchHandler @ 03557ea8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Count__);
                    /* try { // try from 0355779c to 036577a3 has its CatchHandler @ 03557ea4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Item__);
                    /* try { // try from 035577a4 to 036577b3 has its CatchHandler @ 03557ea0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 035577c0 to 036577c7 has its CatchHandler @ 03557d38 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 035577d8 to 036577df has its CatchHandler @ 03557d30 */
    FUN_01bab630(&StringLiteral_22157);
                    /* try { // try from 035577e4 to 036577eb has its CatchHandler @ 03557d28 */
    FUN_01bab630(&StringLiteral_6544);
    FUN_01bab630(&StringLiteral_10931);
                    /* try { // try from 035577fc to 03657803 has its CatchHandler @ 03557d20 */
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 03557804 to 03657813 has its CatchHandler @ 03557d18 */
    FUN_01bab630(&StringLiteral_2187);
    DAT_045682d2 = 1;
    method = extraout_x1;
  }
  pSVar13 = (__this->fields).ACCKHLLKADM;
                    /* try { // try from 03557818 to 0365781f has its CatchHandler @ 03557d34 */
  if (pSVar13 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
                    /* try { // try from 03557830 to 03657837 has its CatchHandler @ 03557d2c */
                    /* try { // try from 0355783c to 03657843 has its CatchHandler @ 03557d24 */
    iVar16 = 0;
    while (iVar16 < (pSVar13->fields)._size) {
                    /* try { // try from 03557854 to 0365785b has its CatchHandler @ 03557d1c */
      pUVar17 = (__this->fields)._itemPrefab;
                    /* try { // try from 0355785c to 0365786b has its CatchHandler @ 03557d14 */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
      }
                    /* try { // try from 03557874 to 03657897 has its CatchHandler @ 035581cc */
      pUVar17 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)pUVar17,
                           Method_UnityEngine_Object_Instantiate<GameObject>__);
      if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto LAB_035580a0;
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
      pUVar14 = (__this->fields)._scroll;
      if ((pUVar14 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
         (pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_035580a0;
                    /* try { // try from 035578a4 to 036578c7 has its CatchHandler @ 03557e78 */
      UnityEngine_Transform__SetParent
                (pUVar2,(UnityEngine_Transform_o *)(pUVar14->fields).m_Content,false,
                 (MethodInfo *)0x0);
      pIVar3 = UnityEngine_GameObject__GetComponent<object>
                         (pUVar17,
                          Method_UnityEngine_GameObject_GetComponent<ProbabilityDialogItem>__);
      pSVar13 = (__this->fields).ACCKHLLKADM;
      if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
                    /* try { // try from 035578d4 to 036578db has its CatchHandler @ 03557e9c */
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar13,iVar16,
                          Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Item__);
                    /* try { // try from 035578ec to 036578f3 has its CatchHandler @ 03557d10 */
      pSVar5 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo)
      ;
                    /* try { // try from 03557904 to 0365790b has its CatchHandler @ 03557d0c */
      System_Text_StringBuilder___ctor(pSVar5,(MethodInfo *)0x0);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_035580a0;
      piVar6 = (int *)((long)&pIVar4[1].klass + 4);
                    /* try { // try from 03557910 to 03657917 has its CatchHandler @ 03557d08 */
      pSVar7 = StringLiteral_2187;
      if (0 < *piVar6) {
        pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* try { // try from 03557928 to 0365792f has its CatchHandler @ 03557d04 */
      }
      local_64 = *(undefined4 *)&pIVar4[1].klass;
      pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    /* try { // try from 03557958 to 03657973 has its CatchHandler @ 03557e98 */
      pSVar7 = System_String__Format
                         (StringLiteral_22157,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto LAB_035580a0;
      System_Text_StringBuilder__Append(pSVar5,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 03557978 to 0365797f has its CatchHandler @ 03557cfc */
      pSVar9 = pIVar4[1].monitor;
      if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
      if (0 < (pSVar9->fields)._size) {
        iVar19 = 0;
        do {
                    /* try { // try from 03557990 to 03657997 has its CatchHandler @ 03557cf8 */
          pIVar8 = System_Collections_Generic_List<object>__get_Item
                             (pSVar9,iVar19,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                             );
          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_035580a0;
          piVar6 = (int *)((long)&pIVar8[1].klass + 4);
                    /* try { // try from 035579a0 to 036579a7 has its CatchHandler @ 03557cf4 */
          pSVar7 = StringLiteral_2187;
          if (0 < *piVar6) {
            pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* try { // try from 035579b8 to 036579bf has its CatchHandler @ 03557cf0 */
          }
          local_64 = *(undefined4 *)&pIVar8[1].klass;
                    /* try { // try from 035579dc to 036579e3 has its CatchHandler @ 03557cec */
          pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
          pSVar7 = System_String__Format
                             (StringLiteral_22157,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
          lVar10 = Method_System_Array_Empty<object>__;
          lVar15 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
          if (lVar15 == 0) {
                    /* try { // try from 03557a08 to 03657a0b has its CatchHandler @ 035581cc */
            FUN_01b8167c(Method_System_Array_Empty<object>__);
            lVar15 = *(long *)(lVar10 + 0x38);
          }
                    /* try { // try from 03557a14 to 03657a3b has its CatchHandler @ 03557c94 */
          lVar15 = *(long *)(lVar15 + 0x10);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_01b81620();
          }
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01b81620();
          }
                    /* try { // try from 03557a54 to 03657a5b has its CatchHandler @ 035581cc */
          System_Text_StringBuilder__AppendFormat
                    (pSVar5,pSVar7,(System_Object_array *)**(undefined8 **)(lVar10 + 0xb8),
                     (MethodInfo *)0x0);
          pSVar9 = pIVar4[1].monitor;
          if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
                    /* try { // try from 03557a64 to 03657a87 has its CatchHandler @ 03557d48 */
          iVar19 = iVar19 + 1;
        } while (iVar19 < (pSVar9->fields)._size);
      }
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_035580a0;
      pIVar11 = pIVar3[2].klass;
      if (pIVar4[2].klass == (Il2CppClass *)0x0) {
        if (pIVar11 == (Il2CppClass *)0x0) goto LAB_035580a0;
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar11,StringLiteral_10931,(MethodInfo *)0x0)
        ;
                    /* try { // try from 03557abc to 03657ac3 has its CatchHandler @ 03557c68 */
        pIVar11 = pIVar3[2].klass;
        if (pIVar11 == (Il2CppClass *)0x0) goto LAB_035580a0;
        value = 0.75;
      }
      else {
        if (pIVar11 == (Il2CppClass *)0x0) goto LAB_035580a0;
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar11,((pIVar4[2].klass)->_1).byval_arg.data
                   ,(MethodInfo *)0x0);
        pIVar11 = pIVar3[2].klass;
                    /* try { // try from 03557a98 to 03657abb has its CatchHandler @ 03557ce4 */
        if (pIVar11 == (Il2CppClass *)0x0) goto LAB_035580a0;
        value = 1.0;
      }
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pIVar11,(MethodInfo *)0x0);
                    /* try { // try from 03557ad0 to 03657ad7 has its CatchHandler @ 03557e74 */
      UnityEngine_TransformExtensions__SetLocalScale(pUVar2,value,(MethodInfo *)0x0);
      plVar18 = pIVar3[2].monitor;
                    /* try { // try from 03557ae8 to 03657aef has its CatchHandler @ 03557e70 */
      pSVar7 = (System_String_o *)
               (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
                    /* try { // try from 03557af4 to 03657afb has its CatchHandler @ 03557e6c */
      if ((pSVar7 == (System_String_o *)0x0) ||
         (pSVar7 = System_String__TrimEnd(pSVar7,10,(MethodInfo *)0x0), plVar18 == (long *)0x0))
      goto LAB_035580a0;
                    /* try { // try from 03557b10 to 03657b17 has its CatchHandler @ 03557e68 */
                    /* try { // try from 03557b18 to 03657b2b has its CatchHandler @ 0355817c */
      (**(code **)(*plVar18 + 0x5e8))(plVar18,pSVar7,*(undefined8 *)(*plVar18 + 0x5f0));
      pSVar13 = (__this->fields).ACCKHLLKADM;
      iVar16 = iVar16 + 1;
      method = extraout_x1_00;
      if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
    }
                    /* try { // try from 03557b34 to 03657b3b has its CatchHandler @ 03557e64 */
    pSVar13 = (__this->fields).DKOKMOCDAJD;
    if (pSVar13 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
      iVar16 = 0;
      goto LAB_03557b4c;
    }
  }
LAB_035580a0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03556288 with catch @ 035580a0 */
  FUN_01bab8c8();
LAB_03557b4c:
  if ((pSVar13->fields)._size <= iVar16) {
                    /* catch() { ... } // from try @ 03556e38 with catch @ 03557db0 */
    pSVar13 = (__this->fields).LOMGJKLDCGH;
                    /* catch() { ... } // from try @ 03556df8 with catch @ 03557db4 */
    if (pSVar13 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
                    /* catch() { ... } // from try @ 03556df0 with catch @ 03557db8 */
                    /* catch() { ... } // from try @ 03556dd8 with catch @ 03557dbc */
                    /* catch() { ... } // from try @ 03556dcc with catch @ 03557dc0 */
      iVar16 = 0;
      goto LAB_03557dc4;
    }
    goto LAB_035580a0;
  }
  pUVar17 = (__this->fields)._itemPrefab;
                    /* try { // try from 03557b60 to 03657b63 has its CatchHandler @ 035581d0 */
                    /* try { // try from 03557b64 to 03657b67 has its CatchHandler @ 035581c0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03557b68 to 03657b6b has its CatchHandler @ 035581a0 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03557b6c to 03657b6f has its CatchHandler @ 0355819c */
                    /* try { // try from 03557b70 to 03657b73 has its CatchHandler @ 03558198 */
                    /* try { // try from 03557b74 to 03657b77 has its CatchHandler @ 03558194 */
                    /* try { // try from 03557b78 to 03657b7b has its CatchHandler @ 03558190 */
                    /* try { // try from 03557b7c to 03657b7f has its CatchHandler @ 035581ac */
  pUVar17 = (UnityEngine_GameObject_o *)
            UnityEngine_Object__Instantiate<object>
                      ((Il2CppObject *)pUVar17,Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 03557b80 to 03657b83 has its CatchHandler @ 0355817c */
  if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto LAB_035580a0;
                    /* try { // try from 03557b84 to 03657b87 has its CatchHandler @ 03558128 */
                    /* try { // try from 03557b88 to 03657b8b has its CatchHandler @ 03558124 */
                    /* try { // try from 03557b8c to 03657b8f has its CatchHandler @ 03558120 */
  pUVar2 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                    /* try { // try from 03557b90 to 03657b93 has its CatchHandler @ 0355811c */
  pUVar14 = (__this->fields)._scroll;
                    /* try { // try from 03557b94 to 03657b97 has its CatchHandler @ 03558118 */
                    /* try { // try from 03557b98 to 03657b9b has its CatchHandler @ 03558114 */
  if ((pUVar14 == (UnityEngine_UI_ScrollRect_o *)0x0) || (pUVar2 == (UnityEngine_Transform_o *)0x0))
  goto LAB_035580a0;
                    /* try { // try from 03557b9c to 03657b9f has its CatchHandler @ 03558160 */
                    /* try { // try from 03557ba0 to 03657ba3 has its CatchHandler @ 0355815c */
                    /* try { // try from 03557ba4 to 03657ba7 has its CatchHandler @ 03558154 */
                    /* try { // try from 03557ba8 to 03657bab has its CatchHandler @ 0355814c */
  UnityEngine_Transform__SetParent
            (pUVar2,(UnityEngine_Transform_o *)(pUVar14->fields).m_Content,false,(MethodInfo *)0x0);
                    /* try { // try from 03557bac to 03657baf has its CatchHandler @ 03558144 */
                    /* try { // try from 03557bb0 to 03657bb3 has its CatchHandler @ 0355813c */
                    /* try { // try from 03557bb4 to 03657bb7 has its CatchHandler @ 03558134 */
                    /* try { // try from 03557bb8 to 03657bbb has its CatchHandler @ 0355812c */
                    /* try { // try from 03557bbc to 03657bbf has its CatchHandler @ 03557d44 */
  pIVar3 = UnityEngine_GameObject__GetComponent<object>
                     (pUVar17,Method_UnityEngine_GameObject_GetComponent<ProbabilityDialogItem>__);
                    /* try { // try from 03557bc0 to 03657bc3 has its CatchHandler @ 03557e94 */
  pSVar13 = (__this->fields).DKOKMOCDAJD;
                    /* try { // try from 03557bc4 to 03657bc7 has its CatchHandler @ 03557d54 */
  if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
                    /* try { // try from 03557bc8 to 03657bcb has its CatchHandler @ 03557d50 */
                    /* try { // try from 03557bcc to 03657bcf has its CatchHandler @ 03557d48 */
                    /* catch() { ... } // from try @ 0355753c with catch @ 03557bd0
                       try { // try from 03557bd0 to 03657f57 has its CatchHandler @ 035559c8 */
                    /* catch() { ... } // from try @ 035574e4 with catch @ 03557bd4 */
                    /* catch() { ... } // from try @ 03557534 with catch @ 03557bd8 */
                    /* catch() { ... } // from try @ 035574dc with catch @ 03557bdc */
                    /* catch() { ... } // from try @ 0355751c with catch @ 03557be0 */
  pIVar4 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar13,iVar16,
                      Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Item__);
                    /* catch() { ... } // from try @ 035574c4 with catch @ 03557be4 */
                    /* catch() { ... } // from try @ 03557510 with catch @ 03557be8 */
                    /* catch() { ... } // from try @ 035574b8 with catch @ 03557bec */
                    /* catch() { ... } // from try @ 035574f8 with catch @ 03557bf0 */
                    /* catch() { ... } // from try @ 035574a0 with catch @ 03557bf4 */
                    /* catch() { ... } // from try @ 03557408 with catch @ 03557bf8 */
  pSVar5 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
                    /* catch() { ... } // from try @ 035573a0 with catch @ 03557bfc */
                    /* catch() { ... } // from try @ 03557400 with catch @ 03557c00 */
                    /* catch() { ... } // from try @ 03557398 with catch @ 03557c04 */
  System_Text_StringBuilder___ctor(pSVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035573e8 with catch @ 03557c08 */
  if (pIVar4 == (Il2CppObject *)0x0) goto LAB_035580a0;
  piVar6 = (int *)((long)&pIVar4[1].klass + 4);
                    /* catch() { ... } // from try @ 03557380 with catch @ 03557c0c */
                    /* catch() { ... } // from try @ 035573dc with catch @ 03557c10 */
                    /* catch() { ... } // from try @ 03557374 with catch @ 03557c14 */
                    /* catch() { ... } // from try @ 035573c4 with catch @ 03557c18 */
  pSVar7 = StringLiteral_2187;
  if (0 < *piVar6) {
                    /* catch() { ... } // from try @ 0355735c with catch @ 03557c1c */
                    /* catch() { ... } // from try @ 035575e8 with catch @ 03557c20 */
    pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557484 with catch @ 03557c24 */
                    /* catch() { ... } // from try @ 035575cc with catch @ 03557c28 */
  }
                    /* catch() { ... } // from try @ 035575ac with catch @ 03557c38 */
  local_64 = *(undefined4 *)&pIVar4[1].klass;
                    /* catch() { ... } // from try @ 03557458 with catch @ 03557c3c */
                    /* catch() { ... } // from try @ 035575a0 with catch @ 03557c40 */
                    /* catch() { ... } // from try @ 03557440 with catch @ 03557c44 */
                    /* catch() { ... } // from try @ 03557588 with catch @ 03557c48 */
  pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    /* catch() { ... } // from try @ 0355742c with catch @ 03557c4c */
                    /* catch() { ... } // from try @ 03557344 with catch @ 03557c50 */
                    /* catch() { ... } // from try @ 03557330 with catch @ 03557c54 */
                    /* catch() { ... } // from try @ 03557328 with catch @ 03557c58 */
                    /* catch() { ... } // from try @ 03557310 with catch @ 03557c5c */
                    /* catch() { ... } // from try @ 03557304 with catch @ 03557c60 */
  pSVar7 = System_String__Format
                     (StringLiteral_22157,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035572ec with catch @ 03557c64 */
  if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03557abc with catch @ 03557c68 */
                    /* catch() { ... } // from try @ 03557160 with catch @ 03557c6c */
                    /* catch() { ... } // from try @ 03557158 with catch @ 03557c70 */
                    /* catch() { ... } // from try @ 03557140 with catch @ 03557c74 */
  System_Text_StringBuilder__Append(pSVar5,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557134 with catch @ 03557c78 */
  pSVar9 = pIVar4[1].monitor;
                    /* catch() { ... } // from try @ 0355711c with catch @ 03557c7c */
  if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 0355710c with catch @ 03557c80 */
                    /* catch() { ... } // from try @ 035570cc with catch @ 03557c84 */
                    /* catch() { ... } // from try @ 035570b4 with catch @ 03557c88 */
  if (0 < (pSVar9->fields)._size) {
                    /* catch() { ... } // from try @ 035570a8 with catch @ 03557c8c */
    iVar19 = 0;
    do {
                    /* catch() { ... } // from try @ 03557090 with catch @ 03557c90 */
                    /* catch() { ... } // from try @ 03557a14 with catch @ 03557c94 */
                    /* catch() { ... } // from try @ 035572bc with catch @ 03557c98 */
      pIVar8 = System_Collections_Generic_List<object>__get_Item
                         (pSVar9,iVar19,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__);
                    /* catch() { ... } // from try @ 03557258 with catch @ 03557c9c */
      if (pIVar8 == (Il2CppObject *)0x0) goto LAB_035580a0;
      piVar6 = (int *)((long)&pIVar8[1].klass + 4);
                    /* catch() { ... } // from try @ 03557240 with catch @ 03557ca0 */
                    /* catch() { ... } // from try @ 03557234 with catch @ 03557ca4 */
                    /* catch() { ... } // from try @ 0355721c with catch @ 03557ca8 */
                    /* catch() { ... } // from try @ 03557204 with catch @ 03557cac */
      pSVar7 = StringLiteral_2187;
      if (0 < *piVar6) {
                    /* catch() { ... } // from try @ 035571fc with catch @ 03557cb0 */
                    /* catch() { ... } // from try @ 035571e4 with catch @ 03557cb4 */
        pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035571d8 with catch @ 03557cb8 */
                    /* catch() { ... } // from try @ 035571c0 with catch @ 03557cbc */
      }
                    /* catch() { ... } // from try @ 03556bb0 with catch @ 03557ccc */
      local_64 = *(undefined4 *)&pIVar8[1].klass;
                    /* catch() { ... } // from try @ 03556b98 with catch @ 03557cd0 */
                    /* catch() { ... } // from try @ 03556b90 with catch @ 03557cd4 */
                    /* catch() { ... } // from try @ 03556b78 with catch @ 03557cd8 */
                    /* catch() { ... } // from try @ 03556b6c with catch @ 03557cdc */
      pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    /* catch() { ... } // from try @ 03556b54 with catch @ 03557ce0 */
                    /* catch() { ... } // from try @ 03557a98 with catch @ 03557ce4 */
                    /* catch() { ... } // from try @ 035570d4 with catch @ 03557ce8 */
                    /* catch() { ... } // from try @ 035579dc with catch @ 03557cec */
                    /* catch() { ... } // from try @ 035579b8 with catch @ 03557cf0 */
                    /* catch() { ... } // from try @ 035579a0 with catch @ 03557cf4 */
      pSVar7 = System_String__Format
                         (StringLiteral_22157,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557990 with catch @ 03557cf8 */
                    /* catch() { ... } // from try @ 03557978 with catch @ 03557cfc */
                    /* catch() { ... } // from try @ 03557930 with catch @ 03557d00 */
                    /* catch() { ... } // from try @ 03557928 with catch @ 03557d04 */
      System_Text_StringBuilder__Append(pSVar5,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557910 with catch @ 03557d08 */
      pSVar9 = pIVar4[1].monitor;
                    /* catch() { ... } // from try @ 03557904 with catch @ 03557d0c */
      if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 035578ec with catch @ 03557d10 */
                    /* catch() { ... } // from try @ 0355785c with catch @ 03557d14 */
      iVar19 = iVar19 + 1;
                    /* catch() { ... } // from try @ 03557804 with catch @ 03557d18 */
                    /* catch() { ... } // from try @ 03557854 with catch @ 03557d1c */
    } while (iVar19 < (pSVar9->fields)._size);
  }
                    /* catch() { ... } // from try @ 035577fc with catch @ 03557d20 */
                    /* catch() { ... } // from try @ 0355783c with catch @ 03557d24 */
                    /* catch() { ... } // from try @ 035577e4 with catch @ 03557d28 */
                    /* catch() { ... } // from try @ 03557830 with catch @ 03557d2c */
                    /* catch() { ... } // from try @ 035577d8 with catch @ 03557d30 */
  if (((pIVar3 == (Il2CppObject *)0x0) || (pIVar4[2].klass == (Il2CppClass *)0x0)) ||
     (pIVar3[2].klass == (Il2CppClass *)0x0)) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03557818 with catch @ 03557d34 */
                    /* catch() { ... } // from try @ 035577c0 with catch @ 03557d38 */
                    /* catch() { ... } // from try @ 03557570 with catch @ 03557d3c */
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar3[2].klass,
             ((pIVar4[2].klass)->_1).byval_arg.data,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035572d8 with catch @ 03557d40 */
                    /* catch() { ... } // from try @ 03557bbc with catch @ 03557d44 */
  if (pIVar3[2].klass == (Il2CppClass *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03557a64 with catch @ 03557d48
                       catch() { ... } // from try @ 03557bcc with catch @ 03557d48 */
                    /* catch() { ... } // from try @ 0355719c with catch @ 03557d4c */
  pUVar2 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)pIVar3[2].klass,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557174 with catch @ 03557d50
                       catch() { ... } // from try @ 03557bc8 with catch @ 03557d50 */
                    /* catch() { ... } // from try @ 035570f8 with catch @ 03557d54
                       catch() { ... } // from try @ 03557bc4 with catch @ 03557d54 */
                    /* catch() { ... } // from try @ 03557080 with catch @ 03557d58 */
  UnityEngine_TransformExtensions__SetLocalScale(pUVar2,0.9,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557028 with catch @ 03557d5c */
                    /* catch() { ... } // from try @ 03557020 with catch @ 03557d60 */
  plVar18 = pIVar3[2].monitor;
                    /* catch() { ... } // from try @ 03557008 with catch @ 03557d64 */
                    /* catch() { ... } // from try @ 03556ffc with catch @ 03557d68 */
                    /* catch() { ... } // from try @ 03556fe4 with catch @ 03557d6c */
  pSVar7 = (System_String_o *)
           (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                     (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
                    /* catch() { ... } // from try @ 03556fb4 with catch @ 03557d70 */
                    /* catch() { ... } // from try @ 03556f94 with catch @ 03557d74 */
                    /* catch() { ... } // from try @ 03556f8c with catch @ 03557d78 */
                    /* catch() { ... } // from try @ 03556f74 with catch @ 03557d7c */
                    /* catch() { ... } // from try @ 03556f68 with catch @ 03557d80 */
                    /* catch() { ... } // from try @ 03556f50 with catch @ 03557d84 */
  if ((pSVar7 == (System_String_o *)0x0) ||
     (pSVar7 = System_String__TrimEnd(pSVar7,10,(MethodInfo *)0x0), plVar18 == (long *)0x0))
  goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03556f20 with catch @ 03557d88 */
                    /* catch() { ... } // from try @ 03556f00 with catch @ 03557d8c */
                    /* catch() { ... } // from try @ 03556ef8 with catch @ 03557d90 */
                    /* catch() { ... } // from try @ 03556ee0 with catch @ 03557d94 */
                    /* catch() { ... } // from try @ 03556ed4 with catch @ 03557d98 */
                    /* catch() { ... } // from try @ 03556ebc with catch @ 03557d9c */
  (**(code **)(*plVar18 + 0x5e8))(plVar18,pSVar7,*(undefined8 *)(*plVar18 + 0x5f0));
                    /* catch() { ... } // from try @ 03556e7c with catch @ 03557da0 */
  pSVar13 = (__this->fields).DKOKMOCDAJD;
                    /* catch() { ... } // from try @ 03556e74 with catch @ 03557da4 */
  iVar16 = iVar16 + 1;
                    /* catch() { ... } // from try @ 03556e5c with catch @ 03557da8 */
  method = extraout_x1_01;
  if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
  goto LAB_03557b4c;
LAB_03557dc4:
                    /* catch() { ... } // from try @ 03556db4 with catch @ 03557dc4 */
                    /* catch() { ... } // from try @ 03556d84 with catch @ 03557dc8 */
                    /* catch() { ... } // from try @ 03556c3c with catch @ 03557dcc */
  if ((pSVar13->fields)._size <= iVar16) {
                    /* catch() { ... } // from try @ 03556270 with catch @ 035580a4 */
                    /* catch() { ... } // from try @ 03556264 with catch @ 035580a8 */
                    /* catch() { ... } // from try @ 0355624c with catch @ 035580ac */
                    /* catch() { ... } // from try @ 03556218 with catch @ 035580b0 */
                    /* catch() { ... } // from try @ 03556210 with catch @ 035580b4 */
                    /* catch() { ... } // from try @ 035561f8 with catch @ 035580b8 */
                    /* catch() { ... } // from try @ 035561ec with catch @ 035580bc */
                    /* catch() { ... } // from try @ 035561d4 with catch @ 035580c0 */
                    /* catch() { ... } // from try @ 035561c4 with catch @ 035580c4 */
    return;
  }
                    /* catch() { ... } // from try @ 03556d4c with catch @ 03557dd0 */
                    /* catch() { ... } // from try @ 03556d34 with catch @ 03557dd4 */
  pUVar17 = (__this->fields)._itemPrefab;
                    /* catch() { ... } // from try @ 03556d28 with catch @ 03557dd8 */
                    /* catch() { ... } // from try @ 03556d10 with catch @ 03557ddc */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03556cd4 with catch @ 03557de0 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 03556ccc with catch @ 03557de4 */
                    /* catch() { ... } // from try @ 03556a70 with catch @ 03557de8 */
                    /* catch() { ... } // from try @ 03556cb4 with catch @ 03557dec */
                    /* catch() { ... } // from try @ 03556ca8 with catch @ 03557df0 */
                    /* catch() { ... } // from try @ 03556c90 with catch @ 03557df4 */
  pUVar17 = (UnityEngine_GameObject_o *)
            UnityEngine_Object__Instantiate<object>
                      ((Il2CppObject *)pUVar17,Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* catch() { ... } // from try @ 03556a20 with catch @ 03557df8 */
  if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03556a18 with catch @ 03557dfc */
                    /* catch() { ... } // from try @ 03556a00 with catch @ 03557e00 */
                    /* catch() { ... } // from try @ 035569f4 with catch @ 03557e04 */
  pUVar2 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035569dc with catch @ 03557e08 */
  pUVar14 = (__this->fields)._scroll;
                    /* catch() { ... } // from try @ 035569ac with catch @ 03557e0c */
                    /* catch() { ... } // from try @ 0355695c with catch @ 03557e10 */
  if ((pUVar14 == (UnityEngine_UI_ScrollRect_o *)0x0) || (pUVar2 == (UnityEngine_Transform_o *)0x0))
  goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03556954 with catch @ 03557e14 */
                    /* catch() { ... } // from try @ 0355693c with catch @ 03557e18 */
                    /* catch() { ... } // from try @ 03556930 with catch @ 03557e1c */
                    /* catch() { ... } // from try @ 03556918 with catch @ 03557e20 */
  UnityEngine_Transform__SetParent
            (pUVar2,(UnityEngine_Transform_o *)(pUVar14->fields).m_Content,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035568a8 with catch @ 03557e24 */
                    /* catch() { ... } // from try @ 035568a0 with catch @ 03557e28 */
                    /* catch() { ... } // from try @ 03556888 with catch @ 03557e2c */
                    /* catch() { ... } // from try @ 0355687c with catch @ 03557e30 */
                    /* catch() { ... } // from try @ 03556864 with catch @ 03557e34 */
  pIVar3 = UnityEngine_GameObject__GetComponent<object>
                     (pUVar17,Method_UnityEngine_GameObject_GetComponent<ProbabilityDialogItem>__);
                    /* catch() { ... } // from try @ 03556834 with catch @ 03557e38 */
  pSVar13 = (__this->fields).LOMGJKLDCGH;
                    /* catch() { ... } // from try @ 035567e4 with catch @ 03557e3c */
  if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 035567dc with catch @ 03557e40 */
                    /* catch() { ... } // from try @ 035567c4 with catch @ 03557e44 */
                    /* catch() { ... } // from try @ 035567b8 with catch @ 03557e48 */
                    /* catch() { ... } // from try @ 035567a0 with catch @ 03557e4c */
                    /* catch() { ... } // from try @ 03556770 with catch @ 03557e50 */
                    /* catch() { ... } // from try @ 03556708 with catch @ 03557e54 */
                    /* catch() { ... } // from try @ 035566f0 with catch @ 03557e58 */
  pIVar4 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar13,iVar16,
                      Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Item__);
                    /* catch() { ... } // from try @ 035566e4 with catch @ 03557e5c */
                    /* catch() { ... } // from try @ 035566cc with catch @ 03557e60 */
                    /* catch() { ... } // from try @ 03557b34 with catch @ 03557e64 */
                    /* catch() { ... } // from try @ 03557b10 with catch @ 03557e68 */
                    /* catch() { ... } // from try @ 03557af4 with catch @ 03557e6c */
                    /* catch() { ... } // from try @ 03557ae8 with catch @ 03557e70 */
  pSVar5 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
                    /* catch() { ... } // from try @ 03557ad0 with catch @ 03557e74 */
                    /* catch() { ... } // from try @ 035578a4 with catch @ 03557e78 */
                    /* catch() { ... } // from try @ 03557260 with catch @ 03557e7c */
  System_Text_StringBuilder___ctor(pSVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03556bf4 with catch @ 03557e80 */
  if (pIVar4 == (Il2CppObject *)0x0) goto LAB_035580a0;
  piVar6 = (int *)((long)&pIVar4[1].klass + 4);
                    /* catch() { ... } // from try @ 03556694 with catch @ 03557e84 */
                    /* catch() { ... } // from try @ 03556d54 with catch @ 03557e88 */
                    /* catch() { ... } // from try @ 03556ad8 with catch @ 03557e8c */
                    /* catch() { ... } // from try @ 03556710 with catch @ 03557e90 */
  pSVar7 = StringLiteral_2187;
  if (0 < *piVar6) {
                    /* catch() { ... } // from try @ 035579c0 with catch @ 03557e94
                       catch() { ... } // from try @ 03557bc0 with catch @ 03557e94 */
                    /* catch() { ... } // from try @ 03557958 with catch @ 03557e98 */
    pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035578d4 with catch @ 03557e9c */
                    /* catch() { ... } // from try @ 035577a4 with catch @ 03557ea0 */
  }
                    /* catch() { ... } // from try @ 03557760 with catch @ 03557eb0 */
  local_64 = *(undefined4 *)&pIVar4[1].klass;
                    /* catch() { ... } // from try @ 0355774c with catch @ 03557eb4 */
                    /* catch() { ... } // from try @ 03557740 with catch @ 03557eb8 */
                    /* catch() { ... } // from try @ 035576e4 with catch @ 03557ebc */
                    /* catch() { ... } // from try @ 035576dc with catch @ 03557ec0 */
  pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    /* catch() { ... } // from try @ 035576c4 with catch @ 03557ec4 */
                    /* catch() { ... } // from try @ 035576b8 with catch @ 03557ec8 */
                    /* catch() { ... } // from try @ 035576a0 with catch @ 03557ecc */
                    /* catch() { ... } // from try @ 03557654 with catch @ 03557ed0 */
                    /* catch() { ... } // from try @ 03557640 with catch @ 03557ed4 */
                    /* catch() { ... } // from try @ 03557638 with catch @ 03557ed8 */
  pSVar7 = System_String__Format
                     (StringLiteral_22157,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557620 with catch @ 03557edc */
  if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03557614 with catch @ 03557ee0 */
                    /* catch() { ... } // from try @ 035575fc with catch @ 03557ee4 */
                    /* catch() { ... } // from try @ 035572c0 with catch @ 03557ee8 */
                    /* catch() { ... } // from try @ 0355729c with catch @ 03557eec */
  System_Text_StringBuilder__Append(pSVar5,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03556c78 with catch @ 03557ef0 */
  pSVar9 = pIVar4[1].monitor;
                    /* catch() { ... } // from try @ 03556628 with catch @ 03557ef4 */
  if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 035565f4 with catch @ 03557ef8 */
                    /* catch() { ... } // from try @ 035565dc with catch @ 03557efc */
                    /* catch() { ... } // from try @ 035565d0 with catch @ 03557f00 */
  if (0 < (pSVar9->fields)._size) {
                    /* catch() { ... } // from try @ 035565b8 with catch @ 03557f04 */
    iVar19 = 0;
    do {
                    /* catch() { ... } // from try @ 03556578 with catch @ 03557f08 */
                    /* catch() { ... } // from try @ 03556564 with catch @ 03557f0c */
                    /* catch() { ... } // from try @ 0355655c with catch @ 03557f10 */
      pIVar8 = System_Collections_Generic_List<object>__get_Item
                         (pSVar9,iVar19,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__);
                    /* catch() { ... } // from try @ 03556544 with catch @ 03557f14 */
      if (pIVar8 == (Il2CppObject *)0x0) goto LAB_035580a0;
      piVar6 = (int *)((long)&pIVar8[1].klass + 4);
                    /* catch() { ... } // from try @ 03556538 with catch @ 03557f18 */
                    /* catch() { ... } // from try @ 03556520 with catch @ 03557f1c */
                    /* catch() { ... } // from try @ 03556510 with catch @ 03557f20 */
                    /* catch() { ... } // from try @ 035564b8 with catch @ 03557f24 */
      pSVar7 = StringLiteral_2187;
      if (0 < *piVar6) {
                    /* catch() { ... } // from try @ 035564b0 with catch @ 03557f28 */
                    /* catch() { ... } // from try @ 03556498 with catch @ 03557f2c */
        pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0355648c with catch @ 03557f30 */
                    /* catch() { ... } // from try @ 03556474 with catch @ 03557f34 */
      }
                    /* catch() { ... } // from try @ 035563ec with catch @ 03557f44 */
      local_64 = *(undefined4 *)&pIVar8[1].klass;
                    /* catch() { ... } // from try @ 035563e0 with catch @ 03557f48 */
      pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    /* try { // try from 03557f58 to 03657f6f has its CatchHandler @ 0355806c */
      pSVar7 = System_String__Format
                         (StringLiteral_22157,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 03557f70 to 0365805b has its CatchHandler @ 035559c8 */
      System_Text_StringBuilder__Append(pSVar5,pSVar7,(MethodInfo *)0x0);
      pSVar9 = pIVar4[1].monitor;
      if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
      iVar19 = iVar19 + 1;
    } while (iVar19 < (pSVar9->fields)._size);
  }
  if (pIVar3 == (Il2CppObject *)0x0) goto LAB_035580a0;
  plVar18 = pIVar3[2].monitor;
  pSVar7 = (System_String_o *)
           (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                     (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
  if ((pSVar7 == (System_String_o *)0x0) ||
     (pSVar7 = System_String__TrimEnd(pSVar7,10,(MethodInfo *)0x0), plVar18 == (long *)0x0))
  goto LAB_035580a0;
  (**(code **)(*plVar18 + 0x5e8))(plVar18,pSVar7,*(undefined8 *)(*plVar18 + 0x5f0));
  if ((pIVar4[3].klass == (Il2CppClass *)0x0) ||
     (pSVar7 = (System_String_o *)((pIVar4[3].klass)->_1).namespaze,
     pSVar7 == (System_String_o *)0x0)) goto LAB_035580a0;
  bVar1 = System_String__StartsWith(pSVar7,StringLiteral_6544,(MethodInfo *)0x0);
  if (bVar1) {
    if (pIVar4[3].klass == (Il2CppClass *)0x0) goto LAB_035580a0;
    pSVar7 = OFFIONDOEPM__HHJFGJLPHCH
                       ((System_String_o *)((pIVar4[3].klass)->_1).namespaze,(MethodInfo *)0x0);
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    /* try { // try from 0355805c to 0365806b has its CatchHandler @ 0355806c */
    if (((pIVar4[3].klass == (Il2CppClass *)0x0) || (__this_00 == (JMDPBFOCHHP_o *)0x0)) ||
       (pJVar12 = JMDPBFOCHHP__DOKLIOAMCCO
                            (__this_00,(System_String_o *)((pIVar4[3].klass)->_1).namespaze,
                             (MethodInfo *)0x0), pJVar12 == (JMDPBFOCHHP_ODJJOAOCFKO_o *)0x0))
    goto LAB_035580a0;
    pSVar7 = (pJVar12->fields).KPDPJONADPJ;
  }
                    /* catch() { ... } // from try @ 03557f58 with catch @ 0355806c
                       catch() { ... } // from try @ 0355805c with catch @ 0355806c */
  if (pIVar3[2].klass == (Il2CppClass *)0x0) goto LAB_035580a0;
                    /* try { // try from 03558070 to 03658073 has its CatchHandler @ 0355807c */
                    /* try { // try from 03558074 to 036581d3 has its CatchHandler @ 035559c8 */
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar3[2].klass,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03558070 with catch @ 0355807c */
  if (pIVar3[2].klass == (Il2CppClass *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 035563c8 with catch @ 03558080 */
                    /* catch() { ... } // from try @ 0355633c with catch @ 03558084 */
  pUVar2 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)pIVar3[2].klass,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03556334 with catch @ 03558088 */
                    /* catch() { ... } // from try @ 0355631c with catch @ 0355808c */
                    /* catch() { ... } // from try @ 03556310 with catch @ 03558090 */
  UnityEngine_TransformExtensions__SetLocalScale(pUVar2,0.8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035562f8 with catch @ 03558094 */
  pSVar13 = (__this->fields).LOMGJKLDCGH;
                    /* catch() { ... } // from try @ 035562e8 with catch @ 03558098 */
  iVar16 = iVar16 + 1;
                    /* catch() { ... } // from try @ 03556290 with catch @ 0355809c */
  if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
  goto LAB_03557dc4;
}

