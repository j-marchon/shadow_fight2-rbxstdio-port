// TypeDefIndex 982
// Namespace: 
// public class TextPic.OFKFGMDCIJP
// Fields:
//   private int <LKDPNJEBNFO>k__BackingField; // 0x10
//   private int <BNEEPBICADN>k__BackingField; // 0x14

// ===== public override string ToString()  [RVA 0x30BA2EC]
// Nekki.SF2.GUI.TextPic.OFKFGMDCIJP$$ToString @ RVA 0x30BA2EC

System_String_o *
Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__ToString
          (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  System_String_o *pSVar1;
  int local_3c;
  int32_t local_38;
  int32_t local_34;
  
                    /* try { // try from 031ba2f8 to 032ba2fb has its CatchHandler @ 031ba314 */
                    /* try { // try from 031ba2fc to 032ba32b has its CatchHandler @ 031ba08c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba224 with catch @ 031ba300
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba2b8 with catch @ 031ba304
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba294 with catch @ 031ba308
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba280 with catch @ 031ba30c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba260 with catch @ 031ba310
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba2f8 with catch @ 031ba314
                        */
  if ((DAT_0456622c & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 031ba32c to 032ba343 has its CatchHandler @ 031ba3e4 */
    FUN_01bab630(&StringLiteral_15545/*"[LineInfo: StartCharID='{0}', EndCharID='{1}', Length='{2}']"*/);
    DAT_0456622c = 1;
  }
  local_34 = (__this->fields)._LKDPNJEBNFO_k__BackingField;
                    /* try { // try from 031ba344 to 032ba3c7 has its CatchHandler @ 031ba08c */
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  local_38 = (__this->fields)._BNEEPBICADN_k__BackingField;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
  local_3c = ((__this->fields)._BNEEPBICADN_k__BackingField -
             (__this->fields)._LKDPNJEBNFO_k__BackingField) + 1;
  arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
  pSVar1 = System_String__Format(StringLiteral_15545/*"[LineInfo: StartCharID='{0}', EndCharID='{1}', Length='{2}']"*/,arg0,arg1,arg2,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool NFJIIGCLFOF(TextPic.AGJBBBFDHCF JKOPDFKCFHH)  [RVA 0x30BA3C8]
// Nekki.SF2.GUI.TextPic.OFKFGMDCIJP$$NFJIIGCLFOF @ RVA 0x30BA3C8

bool Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__NFJIIGCLFOF
               (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this,
               Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *JKOPDFKCFHH,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  
                    /* try { // try from 031ba3c8 to 032ba3d7 has its CatchHandler @ 031ba3e0 */
  if (JKOPDFKCFHH != (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0) {
    iVar1 = (JKOPDFKCFHH->fields)._NNEIIMCKKNF_k__BackingField;
                    /* try { // try from 031ba3d8 to 032ba3e7 has its CatchHandler @ 031ba08c */
    if (iVar1 < (__this->fields)._LKDPNJEBNFO_k__BackingField) {
                    /* catch() { ... } // from try @ 031ba3c8 with catch @ 031ba3e0 */
      bVar2 = false;
                    /* catch() { ... } // from try @ 031ba32c with catch @ 031ba3e4 */
    }
    else {
                    /* try { // try from 031ba3e8 to 032ba3eb has its CatchHandler @ 031ba3f4 */
                    /* try { // try from 031ba3ec to 032ba3f7 has its CatchHandler @ 031ba08c */
      bVar2 = iVar1 <= (__this->fields)._BNEEPBICADN_k__BackingField;
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031ba3e8 with catch @ 031ba3f4
                        */
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GACGJFAJHOI()  [RVA 0x30BA424]
// Nekki.SF2.GUI.TextPic.OFKFGMDCIJP$$GACGJFAJHOI @ RVA 0x30BA424

int32_t Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__GACGJFAJHOI
                  (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this,MethodInfo *method)

{
  return (__this->fields)._BNEEPBICADN_k__BackingField;
}


// ===== public int MLHFIIEGCKG()  [RVA 0x30BA3B8]
// Nekki.SF2.GUI.TextPic.OFKFGMDCIJP$$MLHFIIEGCKG @ RVA 0x30BA3B8

int32_t Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__MLHFIIEGCKG
                  (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this,MethodInfo *method)

{
  return ((__this->fields)._BNEEPBICADN_k__BackingField -
         (__this->fields)._LKDPNJEBNFO_k__BackingField) + 1;
}


// ===== public void .ctor(int OKLGEACMDEK, int BNLIAKKMPBL)  [RVA 0x30B9EBC]
// Nekki.SF2.GUI.TextPic.OFKFGMDCIJP$$.ctor @ RVA 0x30B9EBC

void Nekki_SF2_GUI_TextPic_OFKFGMDCIJP___ctor
               (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this,int32_t OKLGEACMDEK,int32_t BNLIAKKMPBL,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._LKDPNJEBNFO_k__BackingField = OKLGEACMDEK;
  (__this->fields)._BNEEPBICADN_k__BackingField = BNLIAKKMPBL;
  return;
}


// ===== private void OLHGAEGMJHD(int CJNHFNHJHPE)  [RVA 0x30BA42C]
// Nekki.SF2.GUI.TextPic.OFKFGMDCIJP$$OLHGAEGMJHD @ RVA 0x30BA42C

void Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__OLHGAEGMJHD
               (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LKDPNJEBNFO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void BKOPIICICDG(int CJNHFNHJHPE)  [RVA 0x30BA434]
// Nekki.SF2.GUI.TextPic.OFKFGMDCIJP$$BKOPIICICDG @ RVA 0x30BA434

void Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__BKOPIICICDG
               (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BNEEPBICADN_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool NFJIIGCLFOF(int OKMOOPOBGAC)  [RVA 0x30BA400]
// Nekki.SF2.GUI.TextPic.OFKFGMDCIJP$$NFJIIGCLFOF @ RVA 0x30BA400

bool Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__NFJIIGCLFOF
               (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this,int32_t OKMOOPOBGAC,MethodInfo *method)

{
  if (OKMOOPOBGAC < (__this->fields)._LKDPNJEBNFO_k__BackingField) {
    return false;
  }
  return OKMOOPOBGAC <= (__this->fields)._BNEEPBICADN_k__BackingField;
}


// ===== public int GHKPJBJIIOG()  [RVA 0x30BA43C]
// Nekki.SF2.GUI.TextPic.OFKFGMDCIJP$$GHKPJBJIIOG @ RVA 0x30BA43C

int32_t Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__GHKPJBJIIOG
                  (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this,MethodInfo *method)

{
  return (__this->fields)._LKDPNJEBNFO_k__BackingField;
}

