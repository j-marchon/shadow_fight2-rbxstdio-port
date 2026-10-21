// TypeDefIndex 1623
// Namespace: 
// public class NEHIACBGFPJ : IEJKLPPLHMO
// Fields:

// ===== public void .ctor()  [RVA 0x31BC898]
// NEHIACBGFPJ$$.ctor @ RVA 0x31BC898

void NEHIACBGFPJ___ctor(NEHIACBGFPJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x31BC8A0]
// NEHIACBGFPJ$$IGMDDJFPIJL @ RVA 0x31BC8A0

System_String_o * NEHIACBGFPJ__IGMDDJFPIJL(NEHIACBGFPJ_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566bf6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_3);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4486);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566bf6 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4486,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0xc0);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_3,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x31BC950]
// NEHIACBGFPJ$$DLKKPFHKIPB @ RVA 0x31BC950

System_Collections_Generic_IEnumerable_string__o *
NEHIACBGFPJ__DLKKPFHKIPB(NEHIACBGFPJ_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566bf7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4487);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4488);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566bf7 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4487,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4488,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ECKDICODLME()  [RVA 0x31BCAC0]
// NEHIACBGFPJ$$ECKDICODLME @ RVA 0x31BCAC0

bool NEHIACBGFPJ__ECKDICODLME(NEHIACBGFPJ_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x31BCAC8]
// NEHIACBGFPJ$$AJJLBBCJAAL @ RVA 0x31BCAC8

/* WARNING: Type propagation algorithm not settling */

System_String_o *
NEHIACBGFPJ__AJJLBBCJAAL(NEHIACBGFPJ_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  MethodInfo_27FC88C *pMVar6;
  System_RuntimeFieldHandle_Fields *pSVar7;
  void *pvVar8;
  Il2CppClass *settings;
  System_String_o *pSVar9;
  System_Nullable_Vector2__o __this_00;
  System_Nullable_Vector2__o __this_01;
  System_Nullable_Vector2__o __this_02;
  UnityEngine_Vector2_o UVar10;
  System_Nullable_Vector2__Fields local_50;
  
  if ((DAT_04566bf8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4489);
                    /* try { // try from 032bcb0c to 033bcba3 has its CatchHandler @ 032bcb0c
                       catch() { ... } // from try @ 032bcb0c with catch @ 032bcb0c
                       catch() { ... } // from try @ 032bcbcc with catch @ 032bcb0c
                       catch() { ... } // from try @ 032bcc1c with catch @ 032bcb0c
                       catch() { ... } // from try @ 032bcc44 with catch @ 032bcb0c
                       catch() { ... } // from try @ 032bcc84 with catch @ 032bcb0c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4490);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4491);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4492);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4493);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4494);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4495);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4496);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4497);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4498);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4499);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4500);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4501);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4502);
                    /* try { // try from 032bcba4 to 033bcbab has its CatchHandler @ 032bcc24 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* try { // try from 032bcbb8 to 033bcbcb has its CatchHandler @ 032bcc28 */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
                    /* try { // try from 032bcbcc to 033bcc17 has its CatchHandler @ 032bcb0c */
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_Value__);
    DAT_04566bf8 = 1;
  }
  local_50 = (System_Nullable_Vector2__Fields)ZEXT812(0);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if ((pIVar2 == (Il2CppObject *)0x0) || (OPAEPDIIOEB == (System_String_array *)0x0)) {
LAB_032bcfb0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032bcc18 to 033bcc1b has its CatchHandler @ 032bcc20 */
                    /* try { // try from 032bcc1c to 033bcc3f has its CatchHandler @ 032bcb0c */
  settings = pIVar2[3].klass;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032bcc18 with catch @ 032bcc20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032bcba4 with catch @ 032bcc24
                        */
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4489,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4490,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar9 = Core_Configs_Models_BuildSettingsExtension__Log
                       ((Core_Configs_Models_ShakeScreenParamsSettings_o *)settings,
                        (MethodInfo *)0x0);
LAB_032bcf78:
    pSVar5 = System_String__Concat(pSVar5,pSVar9,(MethodInfo *)0x0);
  }
  else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032bcbb8 with catch @ 032bcc28
                        */
    if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar9 = OPAEPDIIOEB->m_Items[0];
                    /* try { // try from 032bcc40 to 033bcc43 has its CatchHandler @ 032bcc6c */
                    /* try { // try from 032bcc44 to 033bcc7b has its CatchHandler @ 032bcb0c */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4491,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 032bcc40 with catch @ 032bcc6c */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4492,(MethodInfo *)0x0)
    ;
                    /* try { // try from 032bcc7c to 033bcc83 has its CatchHandler @ 032bcc98 */
                    /* try { // try from 032bcc84 to 033bcc8f has its CatchHandler @ 032bcb0c */
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 032bcc90 to 033bcc97 has its CatchHandler @ 032bcc98 */
    bVar1 = System_String__op_Equality(pSVar9,pSVar5,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032bcc7c with catch @ 032bcc98
                       catch(type#2 @ 00000000) { ... } // from try @ 032bcc90 with catch @ 032bcc98
                        */
    if (bVar1) {
      pMVar6 = (MethodInfo_27FC88C *)0x0;
      local_50 = (System_Nullable_Vector2__Fields)
                 AJAMDCEKAFE__JHLNBAHDGPI(1,OPAEPDIIOEB,(MethodInfo *)0x0);
      if ((local_50._0_8_ & 0xff) != 0) {
        __this_00.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
        __this_00.fields._0_8_ = &local_50;
        UVar10 = System_Nullable<Vector2>__get_Value(__this_00,pMVar6);
        if (settings == (Il2CppClass *)0x0) goto LAB_032bcfb0;
        (settings->_1).name = (char *)UVar10.fields;
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4497,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar7 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4498;
LAB_032bcf44:
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,(System_RuntimeFieldHandle_o)pSVar7->value,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pvVar8 = (settings->_1).image;
        pSVar9 = (System_String_o *)
                 (**(code **)((long)pvVar8 + 0x168))(settings,*(undefined8 *)((long)pvVar8 + 0x170))
        ;
        goto LAB_032bcf78;
      }
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4493,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4494,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar9,pSVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pMVar6 = (MethodInfo_27FC88C *)0x0;
        local_50 = (System_Nullable_Vector2__Fields)
                   AJAMDCEKAFE__JHLNBAHDGPI(1,OPAEPDIIOEB,(MethodInfo *)0x0);
        if ((local_50._0_8_ & 0xff) != 0) {
          __this_01.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
          __this_01.fields._0_8_ = &local_50;
          UVar10 = System_Nullable<Vector2>__get_Value(__this_01,pMVar6);
          if (settings == (Il2CppClass *)0x0) goto LAB_032bcfb0;
          (settings->_1).namespaze = (char *)UVar10.fields;
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4499,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar7 = (System_RuntimeFieldHandle_Fields *)
                   &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4500;
          goto LAB_032bcf44;
        }
      }
      else {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4495,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4496,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar9,pSVar5,(MethodInfo *)0x0);
        if (bVar1) {
          pMVar6 = (MethodInfo_27FC88C *)0x0;
          local_50 = (System_Nullable_Vector2__Fields)
                     AJAMDCEKAFE__JHLNBAHDGPI(1,OPAEPDIIOEB,(MethodInfo *)0x0);
          if ((local_50._0_8_ & 0xff) != 0) {
            __this_02.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
            __this_02.fields._0_8_ = &local_50;
            UVar10 = System_Nullable<Vector2>__get_Value(__this_02,pMVar6);
            if (settings == (Il2CppClass *)0x0) goto LAB_032bcfb0;
            (settings->_1).byval_arg.data = (void *)UVar10.fields;
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4501,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            pSVar7 = (System_RuntimeFieldHandle_Fields *)
                     &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4502;
            goto LAB_032bcf44;
          }
        }
      }
    }
    pSVar5 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
  }
  return pSVar5;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x31BCFB8]
// NEHIACBGFPJ$$KCBILPIAPHN @ RVA 0x31BCFB8

int32_t NEHIACBGFPJ__KCBILPIAPHN(NEHIACBGFPJ_o *__this,MethodInfo *method)

{
  return 1;
}

