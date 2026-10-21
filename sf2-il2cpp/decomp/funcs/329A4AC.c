// OMANDMDCGMF$$CCDHGNJODKP @ RVA 0x329A4AC

int32_t OMANDMDCGMF__CCDHGNJODKP
                  (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *CGOJNOMNFCL,
                  int32_t OCPCLNIPLLB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this;
  int index;
  int32_t iVar3;
  
  if ((DAT_04567385 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__);
    DAT_04567385 = 1;
  }
  if (CGOJNOMNFCL == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
LAB_0339a558:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (CGOJNOMNFCL->fields)._size;
  if (iVar1 < 2) {
    iVar3 = 0;
  }
  else {
    index = 0;
    do {
      __this = (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)CGOJNOMNFCL,index,
                          Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__);
      if (__this == (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)0x0) goto LAB_0339a558;
      bVar2 = Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__NFJIIGCLFOF(__this,OCPCLNIPLLB,(MethodInfo *)0x0);
      if (bVar2) {
        return index;
      }
      index = index + 1;
    } while (iVar1 != index);
    iVar3 = -1;
  }
  return iVar3;
}

