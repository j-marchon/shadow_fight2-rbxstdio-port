// Nekki.SF2.GUI.Fight.ComboModel$$AddCrazyStyle @ RVA 0x332CD90

void Nekki_SF2_GUI_Fight_ComboModel__AddCrazyStyle
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  GOJLGHMMDBO_o *__this_00;
  System_String_o **ppSVar3;
  
  __this_00 = (__this->fields).AMKECFKEGJH;
  if (__this_00 != (GOJLGHMMDBO_o *)0x0) {
    iVar1 = (__this_00->fields).DIMGKENDINF;
    if (iVar1 <= CJNHFNHJHPE) {
      iVar1 = CJNHFNHJHPE;
    }
    (__this_00->fields).DIMGKENDINF = iVar1;
    pSVar2 = GOJLGHMMDBO__ALJPINHKMFK(__this_00,(MethodInfo *)0x0);
    ppSVar3 = &(__this_00->fields).IMHCBMGEIDH;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

