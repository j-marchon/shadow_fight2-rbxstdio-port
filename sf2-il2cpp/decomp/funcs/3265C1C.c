// BDGDJDGHMJI$$BJHAOOLENMG @ RVA 0x3265C1C

void BDGDJDGHMJI__BJHAOOLENMG(KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CHDGOFBHAFI_o *__this;
  KKLJIDJBFEI_o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  UnityEngine_Object_o *exists;
  
  if ((DAT_045671c8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5606);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5607);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5608);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5609);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045671c8 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      exists = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if (bVar1) {
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
            (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03365ef0;
        Nekki_SF2_GUI_Map_MapScene__CloseRaids
                  ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0
                  );
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (__this != (CHDGOFBHAFI_o *)0x0) {
        CHDGOFBHAFI__GJPOEDJOAAM(__this,false,(MethodInfo *)0x0);
        __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
          KKLJIDJBFEI__FHIODBIPGBG(__this_00,(MethodInfo *)0x0);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5606,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5607,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                   FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
          if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
            if ((int)pNVar6->max_length != 0) {
              pNVar6->m_Items[0] = 6;
              Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
              return;
            }
            goto LAB_03365ef4;
          }
        }
      }
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5608,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5609,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pNVar6 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
               FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (pNVar6 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)pNVar6->max_length != 0) {
          pNVar6->m_Items[0] = 6;
          Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
          return;
        }
LAB_03365ef4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_03365ef0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

