// TypeDefIndex 3011
// Namespace: 
// public class KNJPDILMPDG
// Fields:
//   public string JMMIJNFKAAN; // 0x10
//   public string IKIINEOIIAK; // 0x18
//   public List<NBLEEDEAPHB> ACMGAPIMMJI; // 0x20
//   public IGNEHHMICKB BDDFFNDBGHC; // 0x28
//   public Action<object> LAALDDOEANK; // 0x30
//   public string CBLNEFAJOPC; // 0x38
//   public string AEADFCKCECB; // 0x40
//   public LabelButton.MANJLBPDELA MJBABKJDJEA; // 0x48
//   public LabelButton.MANJLBPDELA KHBCJBLHMMC; // 0x4C
//   public float OGEPFDGJOPN; // 0x50
//   public float ACPIHMIEFOM; // 0x54
//   public bool KPHGEANMEDJ; // 0x58
//   public bool GBBFNHCIMDN; // 0x59
//   public bool EFMOMJEJENC; // 0x5A

// ===== public void .ctor(string HGAFFCNMLNP, string ECIBAPAHFLM, List<NBLEEDEAPHB> NMBDHGCKNII, IGNEHHMICKB MEELBFGHELO, Action<object> DNPHBCPFMPB, string JHOMHHGFCMA = "", string CHOJJFLDHOE = "CANCEL", bool EPIPNJLNBNI = False, LabelButton.MANJLBPDELA PAAKEJMBFFH = 1, LabelButton.MANJLBPDELA IFBFFFFGLDJ = 0, bool FKDKFGIFBIJ = True, bool FKMHCCJDDFJ = False, float FJBAGGCNDLF = 840, float INEHHHBAHGP = 0)  [RVA 0x34AC09C]
// KNJPDILMPDG$$.ctor @ RVA 0x34AC09C

void KNJPDILMPDG___ctor(KNJPDILMPDG_o *__this,System_String_o *HGAFFCNMLNP,
                       System_String_o *ECIBAPAHFLM,
                       System_Collections_Generic_List_NBLEEDEAPHB__o *NMBDHGCKNII,
                       IGNEHHMICKB_o *MEELBFGHELO,System_Action_object__o *DNPHBCPFMPB,
                       System_String_o *JHOMHHGFCMA,System_String_o *CHOJJFLDHOE,bool EPIPNJLNBNI,
                       int32_t PAAKEJMBFFH,int32_t IFBFFFFGLDJ,bool FKDKFGIFBIJ,bool FKMHCCJDDFJ,
                       float FJBAGGCNDLF,float INEHHHBAHGP,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Collections_Generic_List_NBLEEDEAPHB__o **ppSVar2;
  IGNEHHMICKB_o **ppIVar3;
  System_Action_object__o **ppSVar4;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).JMMIJNFKAAN = HGAFFCNMLNP;
  thunk_FUN_01c20e04(&__this->fields,HGAFFCNMLNP);
  ppSVar1 = &(__this->fields).IKIINEOIIAK;
  *ppSVar1 = ECIBAPAHFLM;
  thunk_FUN_01c20e04(ppSVar1,ECIBAPAHFLM);
  ppSVar2 = &(__this->fields).ACMGAPIMMJI;
  *ppSVar2 = NMBDHGCKNII;
  thunk_FUN_01c20e04(ppSVar2,NMBDHGCKNII);
  ppIVar3 = &(__this->fields).BDDFFNDBGHC;
  *ppIVar3 = MEELBFGHELO;
  thunk_FUN_01c20e04(ppIVar3,MEELBFGHELO);
  ppSVar4 = &(__this->fields).LAALDDOEANK;
  *ppSVar4 = DNPHBCPFMPB;
  thunk_FUN_01c20e04(ppSVar4,DNPHBCPFMPB);
  ppSVar1 = &(__this->fields).CBLNEFAJOPC;
  *ppSVar1 = JHOMHHGFCMA;
  thunk_FUN_01c20e04(ppSVar1,JHOMHHGFCMA);
  ppSVar1 = &(__this->fields).AEADFCKCECB;
  *ppSVar1 = CHOJJFLDHOE;
  thunk_FUN_01c20e04(ppSVar1,CHOJJFLDHOE);
  (__this->fields).OGEPFDGJOPN = FJBAGGCNDLF;
  (__this->fields).ACPIHMIEFOM = INEHHHBAHGP;
  (__this->fields).KPHGEANMEDJ = EPIPNJLNBNI;
  (__this->fields).GBBFNHCIMDN = FKDKFGIFBIJ;
  (__this->fields).MJBABKJDJEA = PAAKEJMBFFH;
  (__this->fields).KHBCJBLHMMC = IFBFFFFGLDJ;
  (__this->fields).EFMOMJEJENC = FKMHCCJDDFJ;
  return;
}

