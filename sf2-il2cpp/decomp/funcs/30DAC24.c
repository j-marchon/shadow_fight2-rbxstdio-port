// Nekki.SF2.GUI.TableView$$FindIndexOfRowAtPosition @ RVA 0x30DAC24

int32_t Nekki_SF2_GUI_TableView__FindIndexOfRowAtPosition
                  (Nekki_SF2_GUI_TableView_o *__this,float BLEOKMIDGIK,MethodInfo *method)

{
  int32_t iVar1;
  KMAKOOHEKNB_o *__this_00;
  MethodInfo *in_x3;
  
  __this_00 = (__this->fields).HCLHHHKCABP;
  if (__this_00 != (KMAKOOHEKNB_o *)0x0) {
    iVar1 = KMAKOOHEKNB__IBLCNILBAHE(__this_00,(MethodInfo *)0x0);
    iVar1 = Nekki_SF2_GUI_TableView__FindIndexOfRowAtPosition(__this,BLEOKMIDGIK,0,iVar1 + -1,in_x3)
    ;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

