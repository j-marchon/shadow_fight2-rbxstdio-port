// POECGHDENAF$$ELJIPDIDPJD @ RVA 0x30E4294

void POECGHDENAF__ELJIPDIDPJD
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Collections_Generic_List_string__o *MEOBNMMHFGG,
               MethodInfo *method)

{
  System_Collections_Generic_List_XmlNode__o *OBDMHHJBLKL;
  GBJGJEGPHKD_o *INNMCFJNEAE;
  MethodInfo *in_x3;
  
  if ((DAT_045663d0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<XmlNode>_TypeInfo);
    DAT_045663d0 = 1;
  }
  if (MEOBNMMHFGG != (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < (MEOBNMMHFGG->fields)._size) {
      OBDMHHJBLKL = (System_Collections_Generic_List_XmlNode__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<XmlNode>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)OBDMHHJBLKL,
                 Method_System_Collections_Generic_List<XmlNode>__ctor__);
      POECGHDENAF__ABJJDDOFODH(INNMCFJNEAE,OBDMHHJBLKL,MEOBNMMHFGG,in_x3);
      POECGHDENAF__HNIHOIAMDPC(BCKBBGCOMJD,OBDMHHJBLKL,(MethodInfo *)MEOBNMMHFGG);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

