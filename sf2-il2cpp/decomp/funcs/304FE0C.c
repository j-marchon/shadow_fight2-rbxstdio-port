// MCIBPLJEFLJ$$BLDENPCGPNH @ RVA 0x304FE0C

bool MCIBPLJEFLJ__BLDENPCGPNH
               (MCIBPLJEFLJ_o *__this,System_Collections_Generic_List_GEBHIBIEAJE__o *OIMEJPNHBPN,
               GEBHIBIEAJE_o *FCKLNDFALPL,MethodInfo *method)

{
  CNDPAJOLKFN_o *PGDICFIFJCL;
  CNDPAJOLKFN_o *JOOCHALEIJC;
  int iVar1;
  bool bVar2;
  CNDPAJOLKFN_o *__this_00;
  MethodInfo *__this_01;
  GEBHIBIEAJE_o *AKLJJMINIJG;
  MethodInfo *method_00;
  int iVar3;
  FDHJDNACICH_o *FHOGKFAGCJO;
  bool bVar4;
  float DFAGFABMFGL;
  float MHCCGPICFPH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  
  if ((DAT_04565e43 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__);
    DAT_04565e43 = 1;
  }
  __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (MethodInfo *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor((CNDPAJOLKFN_o *)__this_01,(MethodInfo *)0x0);
  if (FCKLNDFALPL != (GEBHIBIEAJE_o *)0x0) {
    local_90.fakeValueActive = (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.fakeValueActive;
    local_90.inited = (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.inited;
    local_90._18_2_ = *(undefined2 *)&(FCKLNDFALPL->fields).MPJJBPFKHIB.fields.field_0x12;
    local_90.hiddenValueOldByte4.fields =
         (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.hiddenValueOldByte4.fields;
    local_90.fakeValue = (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.fakeValue;
    local_90.currentCryptoKey = (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.currentCryptoKey;
    local_90.hiddenValue = (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.hiddenValue;
    DFAGFABMFGL = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                             (MethodInfo *)0x0);
    if (OIMEJPNHBPN != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
      iVar3 = (OIMEJPNHBPN->fields)._size;
      bVar4 = 0 < iVar3;
      if (0 < iVar3) {
        PGDICFIFJCL = (FCKLNDFALPL->fields)._NAHBLDEPFGM_k__BackingField;
        JOOCHALEIJC = (FCKLNDFALPL->fields)._AAEKIIKJBDK_k__BackingField;
        FHOGKFAGCJO = (FCKLNDFALPL->fields).CJCPGCGLDLK;
        iVar3 = 0;
        do {
          AKLJJMINIJG = (GEBHIBIEAJE_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)OIMEJPNHBPN,iVar3,
                                   Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__);
          if (AKLJJMINIJG == (GEBHIBIEAJE_o *)0x0) goto LAB_0314ffb8;
          if ((AKLJJMINIJG->fields).HFFAIKOAFIK != false) {
            local_b0.fakeValueActive = (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.fakeValueActive;
            local_b0.inited = (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.inited;
            local_b0._18_2_ = *(undefined2 *)&(AKLJJMINIJG->fields).MPJJBPFKHIB.fields.field_0x12;
            local_b0.hiddenValueOldByte4.fields =
                 (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.hiddenValueOldByte4.fields;
            local_b0.fakeValue = (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.fakeValue;
            local_b0.currentCryptoKey = (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.currentCryptoKey;
            local_b0.hiddenValue = (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.hiddenValue;
            MHCCGPICFPH = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,
                                     (MethodInfo *)0x0);
            method_00 = __this_01;
            bVar2 = PKHLGDMJPMF__MAINPDNFMCC
                              (PGDICFIFJCL,JOOCHALEIJC,DFAGFABMFGL,
                               (AKLJJMINIJG->fields)._NAHBLDEPFGM_k__BackingField,
                               (AKLJJMINIJG->fields)._AAEKIIKJBDK_k__BackingField,MHCCGPICFPH,
                               __this_00,(CNDPAJOLKFN_o *)__this_01,FHOGKFAGCJO,
                               (AKLJJMINIJG->fields).CJCPGCGLDLK,(MethodInfo *)0x0);
            if (bVar2) {
              MCIBPLJEFLJ__OADIPMFBEJP
                        (__this,FCKLNDFALPL,AKLJJMINIJG,__this_00,(CNDPAJOLKFN_o *)__this_01,
                         method_00);
              return bVar4;
            }
          }
          iVar1 = (OIMEJPNHBPN->fields)._size;
          iVar3 = iVar3 + 1;
          bVar4 = iVar3 < iVar1;
        } while (iVar3 < iVar1);
      }
      return bVar4;
    }
  }
LAB_0314ffb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

