# [[#BretagneLabTour](https://hackpad.com/ep/search/?q=%23BretagneLabTour&via=tPQn73EJTY4)] Atelier de construction d'un kit de mesure / suivi d'humidit� d'une bouture aromatique

Pour le #BretagneLabTour, le [LabFab](http://labfab.fr) de Rennes a accueilli le 16 octobre un atelier d�di� � la fabrication d'un kit de mesure de temp�rature et humidit� sur une bouture de plante aromatique.

*   Ce projet devrait int�resser [Nomade des Mers ](http://nomadedesmers.org/)pour leur culture potag�re sur un bateau. Pour rappel, le [#BretagneLabTour](https://hackpad.com/ep/search/?q=%23BretagneLabTour&via=z8dtT2HL8ik) est pass� par Concarneau le vendredi 9 octobre (cf. ce [PAD](https://hackpad.com/BretagneLabTour-3me-tape-Concarneau-Explore-9-octobre-qfpS66vvoQx)).
*

![](https://hackpad-attachments.s3.amazonaws.com/hackpad.com_z8dtT2HL8ik_p.62368_1444987654525_Photo 16-10-2015 11 17 09.jpg)

L'atelier s'est appuy� sur une carte �lectronique [Particle.io](https://www.particle.io), sous la conduite de [Thomas](https://fr.linkedin.com/in/thomasmeghe) (LabFab).

![](https://hackpad-attachments.s3.amazonaws.com/hackpad.com_z8dtT2HL8ik_p.62368_1444988216634_IMG_3787.JPG)

**<u>Participants</u>**

*   Thomas Meghe, LabFab
*   Flavie Ferchaud, Rennes 2
*   Xavier Coadic, Le Biome
*   Marie Baron, MakerTour
*   Nicolas Loubet, Cellabz

**<u>Mat�riel</u>**

*   1 pot pour plante ou plaque de bouturage
*   1 carte Photon (19 dollars) 3 volt
*   7 fils �lectriques pour arduino
*   1 connectique (4 c�bles)
*   1 capteur d'humidit� arduino ou '[moisture sensor](http://wiki.iteadstudio.com/Moisture_Sensor)'
*   1 bread bord pour les branchements
*   1 r�sistance 10k Ohm
*   1  capteur DHT11 compatible module de capteur d'humidit� num�rique de la temp�rature  
*   1 c�ble USB
*   Logiciel arduino 
*   Node JS pour faire des serveurs internet en local (gratuit)

![](https://hackpad-attachments.s3.amazonaws.com/hackpad.com_z8dtT2HL8ik_p.62368_1444988337971_materiel.jpg)

![](https://hackpad-attachments.s3.amazonaws.com/hackpad.com_z8dtT2HL8ik_p.266912_1444988436963_rennes blt2.jpg)

Vous avez �galement possibilit� de rajouter des capteurs 3 volts pour mesurer / suivre : la qualit� air, la luminosit�, la concentration en particules fines, le mouvement. 

**�tape 1 **

*   Installation des pr�-requis (NodeJS & Driver si Windows)

*   Se rendre sur [](https://docs.particle.io/guide/getting-started/connect/photon/)https://docs.particle.io/guide/getting-started/connect/photon/ puis consulter l'�tape relative � votre syst�me d'exploitation afin d'initialiser le Particle Photon :

*   Installation de NodeJS : se rendre sur [](https://nodejs.org)https://nodejs.org puis t�l�charger et installer le logiciel correspondant � votre OS

*   Red�marrer son ordinateur (utilisateurs Windows)

![](https://hackpad-attachments.s3.amazonaws.com/hackpad.com_z8dtT2HL8ik_p.266912_1444985790662_node js blt.PNG)

*   Installer le driver de Particle [Download it here.](https://s3.amazonaws.com/spark-website/Particle.zip) (Windows)

*   D�zipper le fichier

*   Aller dans le gestionnaire de p�riph�rique puis s�lectionner la carte particle, clique droit mettre � jour et s�lectionner photon.cat

*   Ouvrir un invite de commande sur windows (en mode administrateur) puis taper la ligne suivante : **npm install -g particle-cli**

![](https://hackpad-attachments.s3.amazonaws.com/hackpad.com_z8dtT2HL8ik_p.266912_1444987407793_blt rennes 3.PNG)

*    Taper la nouvelle commande apr�s chargement " particule setup" puis Enter

*   Une fois les lignes de commande charg�e, entrer les lignes de codes suivantes dans la carte connect�e � votre ordinateur par le c�ble USB

NB : l'installation de particle-cli sur Win 8 pose souci (prob. nodejs serial package deprecated).

**�tape 2**

_<D�crire ci apr�s le montage de la carte, les branchements, la r�sistance >_

Aper�u du montage final (r�cup�ration de donn�es d'humidit� d'un pot de thym citron).

![](https://hackpad-attachments.s3.amazonaws.com/hackpad.com_z8dtT2HL8ik_p.266912_1444990261998_blt rennes5.jpg)

**�tape 3**

_< D�crire ci apr�s le d�marrage des mesures sur le plant d'aromate >_

## Licence dutilisation

![](https://hackpad-attachments.s3.amazonaws.com/hackpad.com_CJCut6qvqG0_p.266912_1444998003182_cc-by-sa.png)

Le [Tour de Bretagne des lieux d](https://hackpad.com/CJCut6qvqG0)['](https://hackpad.com/CJCut6qvqG0)[innovation ouverte et des communaut](https://hackpad.com/CJCut6qvqG0)[�](https://hackpad.com/CJCut6qvqG0)[s collaboratives](https://hackpad.com/CJCut6qvqG0) est mis � disposition sous la [licence CC-BY-SA](http://creativecommons.org/licenses/by-sa/4.0/) 4.0 ([](https://hackpad.com/ep/group/F3B8qERPRcQ))[https://hackpad.com/ep/group/F3B8qERPRcQ](https://hackpad.com/ep/group/F3B8qERPRcQ)). 