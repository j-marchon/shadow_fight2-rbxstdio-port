// GLPEFEEGCPM$$LFHPFJOAJIO @ RVA 0x32246E4

bool GLPEFEEGCPM__LFHPFJOAJIO
               (GLPEFEEGCPM_o *PDCJHMOBMPK,GLPEFEEGCPM_o *NECMHLICHNE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  KGBIBHEFBHA_o *PDCJHMOBMPK_00;
  KGBIBHEFBHA_o *NECMHLICHNE_00;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *pGVar4;
  int index;
  FADHMEJJCPO_o *PDCJHMOBMPK_01;
  FADHMEJJCPO_o *NECMHLICHNE_01;
  System_Nullable_bool__Fields local_44 [2];
  
  if ((DAT_04566f67 & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_PPBANLLIGDK<GLPEFEEGCPM>__);
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__);
    DAT_04566f67 = 1;
  }
  local_44[0] = (System_Nullable_bool__Fields)
                AJKNKCLEEAD__PPBANLLIGDK<object>
                          ((Il2CppObject *)PDCJHMOBMPK,(Il2CppObject *)NECMHLICHNE,
                           Method_AJKNKCLEEAD_PPBANLLIGDK<GLPEFEEGCPM>__);
  if (((ushort)local_44[0] & 0xff) == 0) {
    if ((PDCJHMOBMPK == (GLPEFEEGCPM_o *)0x0) || (NECMHLICHNE == (GLPEFEEGCPM_o *)0x0)) {
LAB_03324898:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((PDCJHMOBMPK->fields).LAEGCKIFDOC == (NECMHLICHNE->fields).LAEGCKIFDOC) {
      pGVar3 = (PDCJHMOBMPK->fields).MPAIPMANDEO;
      if ((pGVar3 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) ||
         (pGVar4 = (NECMHLICHNE->fields).MPAIPMANDEO,
         pGVar4 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0))
      goto LAB_03324898;
      if ((pGVar3->fields).count == (pGVar4->fields).count) {
        PDCJHMOBMPK_01 = (PDCJHMOBMPK->fields).PBBGNHKFEPG;
        NECMHLICHNE_01 = (NECMHLICHNE->fields).PBBGNHKFEPG;
        if ((FADHMEJJCPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = FADHMEJJCPO__LFHPFJOAJIO(PDCJHMOBMPK_01,NECMHLICHNE_01,(MethodInfo *)0x0);
        if (bVar2) {
          pGVar3 = (PDCJHMOBMPK->fields).MPAIPMANDEO;
          if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
            index = 0;
            do {
              iVar1 = (pGVar3->fields).count;
              if (iVar1 <= index) {
LAB_033248bc:
                return iVar1 <= index;
              }
              PDCJHMOBMPK_00 =
                   (KGBIBHEFBHA_o *)
                   Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,index,
                              Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__
                             );
              pGVar3 = (NECMHLICHNE->fields).MPAIPMANDEO;
              if (pGVar3 == (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) break;
              NECMHLICHNE_00 =
                   (KGBIBHEFBHA_o *)
                   Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,index,
                              Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__
                             );
              if ((KGBIBHEFBHA_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(KGBIBHEFBHA_TypeInfo);
              }
              bVar2 = KGBIBHEFBHA__LFHPFJOAJIO(PDCJHMOBMPK_00,NECMHLICHNE_00,(MethodInfo *)0x0);
              if (!bVar2) goto LAB_033248bc;
              pGVar3 = (PDCJHMOBMPK->fields).MPAIPMANDEO;
              index = index + 1;
            } while (pGVar3 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0);
          }
          goto LAB_03324898;
        }
      }
    }
    bVar2 = false;
  }
  else {
    bVar2 = System_Nullable<bool>__get_Value
                      ((System_Nullable_bool__o)SUB82(local_44,0),
                       Method_System_Nullable<bool>_get_Value__);
  }
  return bVar2;
}

