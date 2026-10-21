// FDGBGINGEBP$$PPHHKDHJJHK @ RVA 0x318C718

void FDGBGINGEBP__PPHHKDHJJHK
               (System_Text_StringBuilder_o *KHHGPLOMHBB,OPHDIHJPHDE_o *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  Core_Configs_Models_LocalDailyQuestInfo_o *pCVar8;
  undefined1 local_58 [4];
  int32_t local_54;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_04566a14 & 1) == 0) {
                    /* try { // try from 0328c768 to 0338c897 has its CatchHandler @ 0328c768
                       catch() { ... } // from try @ 0328c768 with catch @ 0328c768
                       catch() { ... } // from try @ 0328c9e0 with catch @ 0328c768
                       catch() { ... } // from try @ 0328ca88 with catch @ 0328c768
                       catch() { ... } // from try @ 0328ca90 with catch @ 0328c768
                       catch() { ... } // from try @ 0328cb4c with catch @ 0328c768 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4983);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4984);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4985);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4986);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_System_String_Join<MPAKDCNMLEG>__);
    DAT_04566a14 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4983,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4984,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
  if (IMMNELPBGIF != (OPHDIHJPHDE_o *)0x0) {
    local_44 = (IMMNELPBGIF->fields)._MDAJFAPLLOH_k__BackingField;
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0)) {
LAB_0328ca78:
        uVar7 = thunk_FUN_01be8e1c();
                    /* try { // try from 0328ca7c to 0338ca7f has its CatchHandler @ 0328cab4 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0328ca80 to 0338ca83 has its CatchHandler @ 0328ca9c */
        FUN_01bab798(uVar7,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items,pIVar4);
        local_48 = (IMMNELPBGIF->fields)._PKGCKALOMOF_k__BackingField;
                    /* try { // try from 0328c898 to 0338c8bf has its CatchHandler @ 0328cab0 */
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        goto LAB_0328ca78;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar4;
          thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
          pCVar8 = (IMMNELPBGIF->fields)._DMCIAIBPJGN_k__BackingField;
          if (pCVar8 == (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) goto LAB_0328ca74;
          local_54 = (pCVar8->fields)._AdsTargetCount_k__BackingField;
                    /* try { // try from 0328c8f4 to 0338c91f has its CatchHandler @ 0328caac */
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_54);
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0
             )) goto LAB_0328ca78;
          if (2 < (uint)args->max_length) {
            args->m_Items[2] = pIVar4;
            thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
            local_58[0] = (IMMNELPBGIF->fields)._DJAIGGFHPMK_k__BackingField;
            pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_58);
                    /* try { // try from 0328c958 to 0338c967 has its CatchHandler @ 0328cab8 */
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_0328ca78;
                    /* try { // try from 0328c96c to 0338c97b has its CatchHandler @ 0328caa4 */
            if (3 < (uint)args->max_length) {
              args->m_Items[3] = pIVar4;
              thunk_FUN_01c20e04(args->m_Items + 3,pIVar4);
              pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar1,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4985,
                         (MethodInfo *)0x0);
              pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0328c9bc to 0338c9df has its CatchHandler @ 0328caa0 */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar2,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4986,
                         (MethodInfo *)0x0);
              pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
              pCVar8 = (IMMNELPBGIF->fields)._DMCIAIBPJGN_k__BackingField;
                    /* try { // try from 0328c9e0 to 0338ca73 has its CatchHandler @ 0328c768 */
              if (pCVar8 != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
                pSVar6 = System_String__Join<Int32Enum>
                                   (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)
                                           (pCVar8->fields)._AdsType_k__BackingField,
                                    Method_System_String_Join<MPAKDCNMLEG>__);
                if ((pSVar6 != (System_String_o *)0x0) &&
                   (lVar5 = thunk_FUN_01bda71c(pSVar6,(((args->obj).klass)->_1).element_class),
                   lVar5 == 0)) goto LAB_0328ca78;
                if ((uint)args->max_length < 5) goto LAB_0328ca70;
                args->m_Items[4] = (Il2CppObject *)pSVar6;
                thunk_FUN_01c20e04(args->m_Items + 4,pSVar6);
                pSVar3 = System_String__Format(pSVar3,args,(MethodInfo *)0x0);
                if (KHHGPLOMHBB != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar3,(MethodInfo *)0x0);
                  return;
                }
              }
              goto LAB_0328ca74;
            }
          }
        }
      }
LAB_0328ca70:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0328ca74:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0328ca74 to 0338ca7b has its CatchHandler @ 0328caa8 */
  FUN_01bab8c8();
}

