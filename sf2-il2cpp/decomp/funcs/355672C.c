// FKGKBFENGPJ$$BMBNJDEFKJM @ RVA 0x355672C

void FKGKBFENGPJ__BMBNJDEFKJM
               (FKGKBFENGPJ_o *__this,System_Text_StringBuilder_o *KHHGPLOMHBB,
               System_String_o *JOIBFFEAAGI,System_String_o *KAHAJHDGCFF,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *value;
  System_String_array *pSVar4;
  long lVar5;
  uint uVar6;
  
  if ((DAT_04568b67 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4254);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4255);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568b67 = 1;
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(JOIBFFEAAGI,(MethodInfo *)0x0);
  if (!bVar2) {
    if (KAHAJHDGCFF == (System_String_o *)0x0) goto LAB_036568f0;
    iVar3 = System_String__IndexOf(KAHAJHDGCFF,JOIBFFEAAGI,5,(MethodInfo *)0x0);
    if (iVar3 < 0) {
      return;
    }
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4254,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4255,(MethodInfo *)0x0)
    ;
    value = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    bVar2 = System_String__Contains(KAHAJHDGCFF,value,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar4 = System_String__Split(KAHAJHDGCFF,10,0,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_array *)0x0) {
        if (pSVar4->max_length != 0) {
          if ((int)pSVar4->max_length == 0) {
LAB_036568f4:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (KHHGPLOMHBB == (System_Text_StringBuilder_o *)0x0) goto LAB_036568f0;
          System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar4->m_Items[0],(MethodInfo *)0x0);
          uVar1 = (uint)pSVar4->max_length;
          if (1 < (int)uVar1) {
            lVar5 = 5;
            do {
              uVar6 = (int)lVar5 - 4;
              if (uVar1 <= uVar6) goto LAB_036568f4;
              if (pSVar4->m_Items[lVar5 + -4] == (System_String_o *)0x0) goto LAB_036568f0;
              iVar3 = System_String__IndexOf
                                (pSVar4->m_Items[lVar5 + -4],JOIBFFEAAGI,5,(MethodInfo *)0x0);
              if (-1 < iVar3) {
                if ((uint)pSVar4->max_length <= uVar6) goto LAB_036568f4;
                System_Text_StringBuilder__AppendLine
                          (KHHGPLOMHBB,pSVar4->m_Items[lVar5 + -4],(MethodInfo *)0x0);
              }
              uVar1 = (uint)pSVar4->max_length;
              lVar5 = lVar5 + 1;
            } while ((int)lVar5 + -4 < (int)uVar1);
          }
        }
        return;
      }
      goto LAB_036568f0;
    }
  }
  if (KHHGPLOMHBB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,KAHAJHDGCFF,(MethodInfo *)0x0);
    return;
  }
LAB_036568f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

