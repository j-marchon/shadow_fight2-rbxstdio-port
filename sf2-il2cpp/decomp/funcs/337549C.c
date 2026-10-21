// IOIKBGAJIGO$$GBBPADICKNL @ RVA 0x337549C

bool IOIKBGAJIGO__GBBPADICKNL
               (System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o OCCABHBJNLI,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Object_o *x;
  System_Byte_array *pSVar4;
  MethodInfo *in_x2;
  int iVar5;
  IOIKBGAJIGO_c *pIVar6;
  ulong uVar7;
  System_String_o *pSVar8;
  System_String_array *pSVar9;
  bool bVar10;
  ulong uVar11;
  System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__Fields local_48;
  
  local_48 = OCCABHBJNLI.fields;
  if ((DAT_04567b51 & 1) == 0) {
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<TextAsset>__);
    DAT_04567b51 = 1;
  }
  pIVar6 = IOIKBGAJIGO_TypeInfo;
  if (((ulong)OCCABHBJNLI.fields & 0xff) != 0) {
    iVar3 = System_Nullable<Int32Enum>__get_Value
                      ((System_Nullable_Int32Enum__o)&local_48,
                       Method_System_Nullable<IOIKBGAJIGO_DMIOKBAEKJB>_get_Value__);
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo);
    }
    pIVar6 = IOIKBGAJIGO_TypeInfo;
    IOIKBGAJIGO_TypeInfo->static_fields->IPIMOJKDGPN = iVar3;
  }
  if ((pIVar6->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(pIVar6);
    pIVar6 = IOIKBGAJIGO_TypeInfo;
  }
  pSVar9 = pIVar6->static_fields->OMPNOMAKALF;
  if (pSVar9 != (System_String_array *)0x0) {
    iVar5 = (int)pSVar9->max_length;
    bVar10 = 0 < iVar5;
    if (0 < iVar5) {
      uVar11 = 0;
      uVar7 = pSVar9->max_length & 0xffffffff;
      do {
        if (uVar7 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar8 = pSVar9->m_Items[uVar11];
        if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar8 = IOIKBGAJIGO__PIPGAPGKBLM
                           (pSVar8,(System_Nullable_IOIKBGAJIGO_DMIOKBAEKJB__o)0x0,in_x2);
        pSVar8 = CMEBCBKGFFL__NFBODKMCAMM(pSVar8,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            UnityEngine_Resources__Load<object>
                      (pSVar8,Method_UnityEngine_Resources_Load<TextAsset>__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        in_x2 = (MethodInfo *)0x0;
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (pSVar4 = UnityEngine_TextAsset__get_bytes
                                 ((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0),
             pSVar4 == (System_Byte_array *)0x0)) goto LAB_0347565c;
          if (pSVar4->max_length != 0) {
            return bVar10;
          }
        }
        uVar1 = (uint)pSVar9->max_length;
        uVar7 = (ulong)uVar1;
        uVar11 = uVar11 + 1;
        bVar10 = (long)uVar11 < (long)(int)uVar1;
      } while ((long)uVar11 < (long)(int)uVar1);
    }
                    /* try { // try from 03475644 to 0357587b has its CatchHandler @ 03475644
                       catch() { ... } // from try @ 03475644 with catch @ 03475644
                       catch() { ... } // from try @ 0347590c with catch @ 03475644
                       catch() { ... } // from try @ 03475998 with catch @ 03475644
                       catch() { ... } // from try @ 03475a3c with catch @ 03475644 */
    return bVar10;
  }
LAB_0347565c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

