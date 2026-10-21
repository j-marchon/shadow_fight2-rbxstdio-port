// Nekki.SF2.GUI.TextPic.AGJBBBFDHCF$$OPNBCFNCCNH @ RVA 0x30B9AF4

void Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OPNBCFNCCNH
               (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this,
               System_Collections_Generic_List_IHIFNKAMALG__o *IMEAEJHODHL,MethodInfo *method)

{
  if ((DAT_0456622a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    DAT_0456622a = 1;
  }
  if (IMEAEJHODHL != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
    (__this->fields).GIJDENLPLCD =
         (IMEAEJHODHL->fields)._size <=
         (int)((__this->fields)._OLGGFEFHBAP_k__BackingField << 2 | 3U);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

