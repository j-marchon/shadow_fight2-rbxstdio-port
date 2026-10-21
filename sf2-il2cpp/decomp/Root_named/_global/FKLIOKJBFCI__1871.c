// TypeDefIndex 1871
// Namespace: 
// public class FKLIOKJBFCI
// Fields:
//   public Action<object> LAALDDOEANK; // 0x10
//   public RaidConfig.ENBCJNLAHAC IKJOLJIIBOI; // 0x18
//   public RaidConfig.ENBCJNLAHAC LBICBAHHMLK; // 0x20
//   public bool KBIPPAEJHLH; // 0x28
//   public string FHMCDDGEAFI; // 0x30
//   public string AGGFDBCEJJM; // 0x38
//   public LabelButton.MANJLBPDELA IOBIGBAAAPD; // 0x40
//   public LabelButton.MANJLBPDELA KMMKPJHEHPH; // 0x44
//   public int NKNLOCAHMHI; // 0x48
//   public int LBBOKGMPHKM; // 0x4C
//   public bool BGNNHPMPKPN; // 0x50

// ===== public void .ctor(RaidConfig.ENBCJNLAHAC IPBFCIFKANM, RaidConfig.ENBCJNLAHAC PBNNLOAIFEN, Action<object> DNPHBCPFMPB, bool OCECCMDCMNP = False, int HLLANJEOBOD = 1, int GAFFBPPMMGE = 2, string GJOBHDLPEHH, string IDLCEMOBHIB, LabelButton.MANJLBPDELA HDBFCOGLJII = 1, LabelButton.MANJLBPDELA IHHLPNCOEOB = 1, bool HNMGGECHAKN = False)  [RVA 0x324CD40]
// FKLIOKJBFCI$$.ctor @ RVA 0x324CD40

void FKLIOKJBFCI___ctor(FKLIOKJBFCI_o *__this,RaidConfig_ENBCJNLAHAC_o *IPBFCIFKANM,
                       RaidConfig_ENBCJNLAHAC_o *PBNNLOAIFEN,System_Action_object__o *DNPHBCPFMPB,
                       bool OCECCMDCMNP,int32_t HLLANJEOBOD,int32_t GAFFBPPMMGE,
                       System_String_o *GJOBHDLPEHH,System_String_o *IDLCEMOBHIB,int32_t HDBFCOGLJII
                       ,int32_t IHHLPNCOEOB,bool HNMGGECHAKN,MethodInfo *method)

{
  RaidConfig_ENBCJNLAHAC_o **ppJVar1;
  System_String_o **ppSVar2;
  
                    /* try { // try from 0334cd74 to 0344cd9b has its CatchHandler @ 0334ceb0 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).LAALDDOEANK = DNPHBCPFMPB;
  thunk_FUN_01c20e04(&__this->fields,DNPHBCPFMPB);
  ppJVar1 = &(__this->fields).IKJOLJIIBOI;
  *ppJVar1 = IPBFCIFKANM;
  thunk_FUN_01c20e04(ppJVar1,IPBFCIFKANM);
  ppJVar1 = &(__this->fields).LBICBAHHMLK;
  *ppJVar1 = PBNNLOAIFEN;
  thunk_FUN_01c20e04(ppJVar1,PBNNLOAIFEN);
                    /* try { // try from 0334cdd0 to 0344cdf7 has its CatchHandler @ 0334ceac */
  (__this->fields).KBIPPAEJHLH = OCECCMDCMNP;
  (__this->fields).NKNLOCAHMHI = HLLANJEOBOD;
  (__this->fields).LBBOKGMPHKM = GAFFBPPMMGE;
  ppSVar2 = &(__this->fields).FHMCDDGEAFI;
  *ppSVar2 = GJOBHDLPEHH;
  thunk_FUN_01c20e04(ppSVar2,GJOBHDLPEHH);
  ppSVar2 = &(__this->fields).AGGFDBCEJJM;
  *ppSVar2 = IDLCEMOBHIB;
  thunk_FUN_01c20e04(ppSVar2,IDLCEMOBHIB);
  (__this->fields).BGNNHPMPKPN = HNMGGECHAKN;
  (__this->fields).IOBIGBAAAPD = HDBFCOGLJII;
  (__this->fields).KMMKPJHEHPH = IHHLPNCOEOB;
                    /* try { // try from 0334ce0c to 0344ce13 has its CatchHandler @ 0334cea0 */
                    /* try { // try from 0334ce14 to 0344ce8b has its CatchHandler @ 0334cc80 */
  return;
}

