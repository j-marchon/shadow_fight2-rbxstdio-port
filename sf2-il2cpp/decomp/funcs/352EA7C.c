// Nekki.SF2.GUI.Fight.RoundsPanel$$UpdateVictories @ RVA 0x352EA7C

void Nekki_SF2_GUI_Fight_RoundsPanel__UpdateVictories
               (Nekki_SF2_GUI_Fight_RoundsPanel_o *__this,int32_t EKFFBGHHCJA,MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  int iVar2;
  
  if ((DAT_04568a45 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    DAT_04568a45 = 1;
  }
  __this_00 = (__this->fields).BPPCPHCDICD;
  if (__this_00 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
    iVar2 = (__this_00->fields)._size;
    if (iVar2 <= EKFFBGHHCJA) {
      EKFFBGHHCJA = iVar2;
    }
    if (0 < EKFFBGHHCJA) {
      iVar2 = 0;
      do {
        if (__this_00 == (System_Collections_Generic_List_ResolutionImage__o *)0x0)
        goto LAB_0362eb5c;
        pNVar1 = (Nekki_SF2_GUI_ResolutionImage_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar2,
                            Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
        CJNHFNHJHPE = Nekki_SF2_GUI_Fight_RoundsPanel__PGEPDONKOIN(__this,method_00);
        if (pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0362eb5c;
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        __this_00 = (__this->fields).BPPCPHCDICD;
        iVar2 = iVar2 + 1;
      } while (EKFFBGHHCJA != iVar2);
      if (__this_00 == (System_Collections_Generic_List_ResolutionImage__o *)0x0) goto LAB_0362eb5c;
    }
    do {
      if ((__this_00->fields)._size <= EKFFBGHHCJA) {
        return;
      }
      pNVar1 = (Nekki_SF2_GUI_ResolutionImage_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,EKFFBGHHCJA,
                          Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
      if (pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) break;
                    /* try { // try from 0362eb44 to 0372ebdf has its CatchHandler @ 0362eb44
                       catch() { ... } // from try @ 0362eb44 with catch @ 0362eb44
                       catch() { ... } // from try @ 0362ebe8 with catch @ 0362eb44
                       catch() { ... } // from try @ 0362ec3c with catch @ 0362eb44
                       catch() { ... } // from try @ 0362ec60 with catch @ 0362eb44
                       catch() { ... } // from try @ 0362ec98 with catch @ 0362eb44 */
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar1,(__this->fields)._roundUndone,(MethodInfo *)0x0);
      __this_00 = (__this->fields).BPPCPHCDICD;
      EKFFBGHHCJA = EKFFBGHHCJA + 1;
    } while (__this_00 != (System_Collections_Generic_List_ResolutionImage__o *)0x0);
  }
LAB_0362eb5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

