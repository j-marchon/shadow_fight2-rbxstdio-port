// OMANDMDCGMF$$MLCFOLPGDBO @ RVA 0x32984D0

void OMANDMDCGMF__MLCFOLPGDBO
               (UnityEngine_Bounds_o *__return_storage_ptr__,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *GAOIJJLDHEM,
               Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *KAHAJHDGCFF,
               System_Collections_Generic_HashSet_char__o *HOJFIEJGIHA,
               System_Collections_Generic_HashSet_char__o *NINLELPNDEB,
               System_Collections_Generic_HashSet_char__o *HLBAFDGKOMM,MethodInfo *method)

{
  MethodInfo *in_x6;
  UnityEngine_Bounds_o local_28;
  
  if (KAHAJHDGCFF != (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)0x0) {
    OMANDMDCGMF__MLCFOLPGDBO
              (&local_28,GAOIJJLDHEM,(KAHAJHDGCFF->fields)._LKDPNJEBNFO_k__BackingField,
               (KAHAJHDGCFF->fields)._BNEEPBICADN_k__BackingField,HOJFIEJGIHA,NINLELPNDEB,
               HLBAFDGKOMM,in_x6);
    (__return_storage_ptr__->fields).m_Extents.fields.y = local_28.fields.m_Extents.fields.y;
    (__return_storage_ptr__->fields).m_Extents.fields.z = local_28.fields.m_Extents.fields.z;
    *(undefined8 *)&(__return_storage_ptr__->fields).m_Center.fields.z = local_28.fields._8_8_;
    (__return_storage_ptr__->fields).m_Center.fields.x = local_28.fields.m_Center.fields.x;
    (__return_storage_ptr__->fields).m_Center.fields.y = local_28.fields.m_Center.fields.y;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

