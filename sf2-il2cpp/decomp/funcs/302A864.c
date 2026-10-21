// Nekki.SF2.GUI.SimpleScroll$$ScrollToMedium @ RVA 0x302A864

void Nekki_SF2_GUI_SimpleScroll__ScrollToMedium
               (Nekki_SF2_GUI_SimpleScroll_o *__this,float LFJGFLNMBMC,int32_t GAJONDLDKLI,
               MethodInfo *method)

{
  int iVar1;
  MethodInfo *in_x3;
  long lVar2;
  
  if ((DAT_04565cb7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565cb7 = 1;
  }
  lVar2 = *(long *)&(__this->fields)._snapEase;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(__this,iVar1 >> 1,LFJGFLNMBMC,GAJONDLDKLI,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

